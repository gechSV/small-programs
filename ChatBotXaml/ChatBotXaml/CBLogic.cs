/*Выполнил Степанов В.Е.
 * ИВТ19-1*/
//Класс логики чат бота.
using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;

namespace ChatBotXaml
{
     
    public class CBLogic
    {
        protected String UserName;//Хранит имя заданное пользователем при первом запуске.
                                  //при каждом запуске. Загружать имя в эту переменную из файла.
        private String _txtBlock;//Хранит историю сообщений

        public string TxtBlock
        {
            get { return _txtBlock; }
            set { _txtBlock = value; }
        }

       /* public ArrayList HistoryList = new ArrayList();
        public int HistoryPointer;*/



        /// <summary>
        /// Задаёт имя пользователя 
        /// </summary>
        /// <param name="name"> - Имя пользователя/param>
        public void SetUsName(string name)
        {
            this.UserName = name;
        }

        /// <summary>
        /// Выход: имя пользователя
        /// </summary>
        /// <returns></returns>
        public string GetUsName()
        {
            return this.UserName;
        }

        /// <summary>
        /// Обрабатывает запрос. Выход: ответ на вопрос
        /// </summary>
        /// <param name="FileNameKey"></param>
        /// <param name="qwestion"></param>
        /// <returns></returns>
        public string getAnswer(string FileNameKey, string qwestion)
        {
            string str, res="";
            int c;
            bool flag = false;

            qwestion = qwestion.ToLower();

            string[] massline = File.ReadAllLines(FileNameKey, Encoding.GetEncoding(1251));
                for (int f = 0; f < File.ReadAllLines(FileNameKey).Length; f++)
                {
                    str = massline[f];
                    if (str.Contains(qwestion))
                    {
                    flag = true;
                        for (int i = 0; i < str.Length; i++)
                        {
                            if (str[i] == '{')
                            {
                                c = i + 1;
                                while (str[c] != '}')
                                {
                                    res += str[c];
                                    c++;
                                }
                            }
                        }
                    }
                }

            if (flag)
            {
                return res;
            }
            else
                throw new Exception("Команда не найдена");
        }

        /// <summary>
        /// Форматирует текст ответа для textBox
        /// </summary>
        /// <param name="answer"> -Строка, которую нужно вывести </param>
        /// <returns></returns>
        public string ResponseOutput(string answer)
        {
            string str, timeStr;
            DateTime dt = System.DateTime.Now;
            timeStr = dt.ToString("HH:mm");
            str = timeStr + "\n" + "Bot: " + answer + "\n";
            return str;
        }


        /// <summary>
        /// Форматирует текст пользователя для вывода в TextBlock
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public string UserOutput (string text)
        {
            string str, timeStr;
            DateTime dt = System.DateTime.Now;
            timeStr = dt.ToString("HH:mm");
            str = timeStr + "\n" + this.UserName + ": " + text + "\n";
            return str;
        }

        /// <summary>
        /// Сохранение данных
        /// </summary>
        /// <param name="data"></param>
        public void SaveData (string FileName)
        {
            using (FileStream File = new FileStream(FileName, FileMode.Create))
            {
                using (StreamWriter FileStream = new StreamWriter(File))
                {
                    FileStream.WriteLine(TxtBlock);
                }
            }
        }

        /// <summary>
        /// Считывает и возращает значения файла (для вывода истории при запуске)
        /// </summary>
        /// <returns></returns>
        public void getData(string FileName)
        {
            using (StreamReader File = new StreamReader(FileName))
            {
                TxtBlock = File.ReadToEnd();
            }
        }

        /// <summary>
        /// Считывает и обрабатывает строку формата:"/умножить 10 на 14"
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public double mult(string str)
        {
            double a, b;
            string[] words = str.Split(' ');
            a = Convert.ToDouble(words[1]);
            b = Convert.ToDouble(words[3]);
            return a * b;
        }

        /// <summary>
        /// Открывает .exe файл
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public string OpenExe(string str)
        {
            string[] words = str.Split(' ');
            words[1] += ".exe";
            
            if (File.Exists(words[1]) == false)
            {
                Process.Start(words[1]);
                return "Секундочку....";
            } 
            else
            {
                return "Файл не найден(";
            }
        }

        /// <summary>
        /// Функция обработки вопросов, задаваемых боту.
        /// </summary>
        /// <param name="Question"></param>
        public void PressBut(string Question)
        {
            if (Question.Length != 0)//проверка: введено ли что-то в поле
            {
                //сложная команда начанается с "/"
                if (Question[0] == '/')
                {
                    //questionBuff = questionBuff.ToLower();
                    if (Question.Contains("умножить") || Question.Contains("умножь"))
                    {
                        _txtBlock += UserOutput(Question);
                        _txtBlock += ResponseOutput(Convert.ToString(mult(Question)));
                    }
                    else if (Question.Contains("открой"))
                    {
                        _txtBlock += UserOutput(Question);
                        _txtBlock += ResponseOutput(OpenExe(Question));
                    }
                    else if (Question.Contains("сброс"))
                    {
                        _txtBlock = UserOutput(Question);
                        _txtBlock += ResponseOutput("Выполнено");
                    }
                }
                else
                {
                    try //проверка на наличие ответа в файле.
                    {
                        _txtBlock += UserOutput(Question);
                        _txtBlock += ResponseOutput(getAnswer("TestKey.txt", Question));
                    }
                    catch
                    {
                        _txtBlock += UserOutput(Question);
                        _txtBlock += ResponseOutput("Команда не найдена :(");
                    }
                }

            }
        }

    }
}

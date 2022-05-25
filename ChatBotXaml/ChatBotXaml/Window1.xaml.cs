/*Выполнил Степанов В.Е.
 * ИВТ19-1*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace ChatBotXaml
{
    /// <summary>
    /// Логика взаимодействия для Window1.xaml
    /// </summary>
    public partial class MainWindowBot : Window
    {
        string FileName = "SaveFile.txt";
        public CBLogic Bot = new CBLogic();//Экземпляр класса, отвечающего за логику бота

        public MainWindowBot()
        {
            InitializeComponent();
            Bot.getData(FileName);//Выводим историю
            textBlockTape.Text = Bot.TxtBlock;
        }

        /// <summary>
        /// Логика работы кнопки
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void ButtonEnter_Click(object sender, RoutedEventArgs e)
        {
            Bot.PressBut(TextBoxQuestion.Text);
            textBlockTape.Text = Bot.TxtBlock;
            TextBoxQuestion.Text = "";
        }

        /// <summary>
        /// Обработка нажатия клавиши Enter.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void TextBoxQuestion_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Enter )
            {
                Bot.PressBut(TextBoxQuestion.Text);
                textBlockTape.Text = Bot.TxtBlock;
                TextBoxQuestion.Text = "";
            }
        }

        /// <summary>
        /// сохранение данных при закрытии 
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void Window_Closed(object sender, EventArgs e)
        {
            Bot.SaveData(FileName);
        }
    }
}

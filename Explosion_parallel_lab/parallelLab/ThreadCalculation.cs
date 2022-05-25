using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace parallelLab
{
    public class ThreadCalculation
    {
        private List<Thread> _thread;
        int _numProcs;


        public ThreadCalculation()
        {
            _thread = new List<Thread>();
            _numProcs = Environment.ProcessorCount;
        }


        /// <summary>
        /// Статический метод для генерации угла полёта для каждой частицы
        /// </summary>
        /// <param name="obj">int[], from, to</param>
        public static void setCorner(object obj)
        {
            var corn = obj as ClassPackegeData;

            if (corn != null)
            {
                for (int i = corn._from; i < corn._to; i++)
                {
                    corn._intArr[i] =corn.rnd.Next(0, 90);
                }
            }
            else throw new Exception("Error type obj");
        }

        /// <summary>
        /// Статический метод для генерации скорости
        /// </summary>
        /// <param name="obj"></param>
        public static void setSpeed(object obj)
        {
            var spd = obj as ClassPackegeData;

            if(spd != null)
            {
                for (int i = spd._from; i < spd._to; i++)
                {
                    spd._floatArr[i] = (float)spd.rnd.NextDouble() * 50 + (float)spd.rnd.Next(20, 50);
                }
            }
        }

        public static void setVXY(object obj)
        {
            var spd = obj as ClassPackegeData;

            if (spd != null)
            {
                for (int i = spd._from; i < spd._to; i++)
                {
                    spd._pointF[i].X = (float)(spd._floatArr[i] * Math.Cos(spd._intArr[i] * Math.PI / 180));
                    spd._pointF[i].Y = (float)(spd._floatArr[i] * Math.Sin(spd._intArr[i] * Math.PI / 180));
                }
            }
        }

        public static void calculationPositionPoint(object obj)
        {
            var pos = obj as ClassPackegeData;

            if (pos != null)
            {
                for (int i = pos._from; i < pos._to; i++)
                {
                    pos._pointInt[i].X = (int)Math.Round(pos._pointF[i].X * pos._time);
                    pos._pointInt[i].Y = (int)Math.Round(pos._pointF[i].Y * pos._time);
                }
            }
        }

        /*public static void drawImg(object obj)
        {
            var img = obj as ClassPackegeData;

            if (img != null)
            {
                for (int i = img._from; i < img._to; i++)
                {
                    img._bitmap.SetPixel(img._centr.X + img._pointInt[i].X, 
                        img._centr.Y + img._pointInt[i].Y, img._color);
                }
            }
        }*/

        /// <summary>
        /// Распределяет работу цикла (разбивает итерации) на части и запускает в отдельных потоках
        /// </summary>
        /// <param name="obj"></param>
        /// <param name="func"></param>
        /// <returns></returns>
        public bool startThreading(object obj, Action<object> func)
        {
            var fullData = obj as ClassPackegeData;

            if (fullData != null)
            {
                // Определяяем размер порций данных для передачи в поток
                int divCount = (fullData._to - fullData._from) / _numProcs;
                int modCount = (fullData._to - fullData._from) % _numProcs;
                int from, to;

                // Контейнер для данных
                ClassPackegeData bufPack;

                for (int i = 0; i < _numProcs; i++)
                {
                    if (i != (_numProcs - 1))
                    {
                        // Определяем диапазон данных для обработки
                        from = divCount * i;
                        to = divCount * (i + 1);
                        // Упаковываем в контейнер
                        bufPack = this.packagingData(ref fullData, from, to);
                        _thread.Add(new Thread(func.Invoke));
                        // Закпуск
                        _thread[i].Start(bufPack);
                    }
                    else if (modCount != 0)
                    {
                        // Все тоже самое, диапазон данныз другой
                        from = fullData._to - modCount - 2;
                        to = fullData._to;
                        bufPack = this.packagingData(ref fullData, from, to);
                        _thread.Add(new Thread(func.Invoke));
                        _thread[i].Start(bufPack);
                    }
                }
                this.AllJoin(_thread);
                _thread.Clear();
                return true;
            }
            else
                return false;
        }

        /// <summary>
        /// Ожидание всех потоков
        /// </summary>
        /// <param name="tr"></param>
        private void AllJoin(List<Thread> tr)
        {
            for (int i = 0; i < _thread.Count; i++)
            {
                _thread[i].Join();
            }
        }
 
        // Выдаёт массив в соответствии с нужными данными за счёт флага массива в исходных данных
        private ClassPackegeData packagingData(ref ClassPackegeData data, int from, int to)
        {
            if (data.flagFloatArr)
            {
                return new ClassPackegeData(ref data._floatArr, data.rnd, from, to);
            } 
            else if(data.flagIntArr)
            {
                return new ClassPackegeData(ref data._intArr, data.rnd, from, to);
            }
            else if(data.flagPointFArr)
            {
                ClassPackegeData ret = new ClassPackegeData(ref data._pointF, ref data._floatArr, 
                    ref data._intArr, from, to);
                return ret;
            }
            else if(data.flagPointIntArr)
            {
                return new ClassPackegeData(ref data._pointInt, ref data._pointF, data._time, data._from, data._to);
            }
            else if (data.flagBitmap)
            {
                return new ClassPackegeData(ref data._bitmap, ref data._pointInt, data._color, data._centr, data._from, data._to);
            }
            else
            {
                return null;
            }
        }

    }
}

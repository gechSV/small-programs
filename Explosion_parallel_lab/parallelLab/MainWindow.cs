using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace parallelLab
{
    public partial class MainWindow : Form
    {

        private Bitmap _img;
        private Graphics _g;
        private Brush _brush;
        private Point _centr;

        private int _N = 8000;// количество частиц
        private int[] _corner;// Начальный угол полёта
        private float[] _speed;// Скорость полёта частицы
        private PointF[] _speedPoint;// Скорость частицы по осям х и у
        private Point[] _position;
        private float _time = 0;

        int numProcs;
        ThreadCalculation _myThread;

        Action<Object> f = ThreadCalculation.setCorner;

        Random _rnd;

        Stopwatch watch;

        /// <summary>
        /// Конструктор главного окна
        /// </summary>
        public MainWindow()
        {
            InitializeComponent();

            _img = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            _g = Graphics.FromImage(_img);
            _centr.X = pictureBox1.Width / 2;
            _centr.Y = pictureBox1.Height / 2;
            _brush = new SolidBrush(Color.FromArgb(25, 25, 25));
            numProcs = Environment.ProcessorCount;
            _myThread = new ThreadCalculation();
            timer1.Tick += new EventHandler(allCalc);
            _rnd = new Random();

            label1.Text = "0.0 s";
        }


        /// <summary>
        /// Выполняется при загрузке MainWindow
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void MainWindow_Load(object sender, EventArgs e)
        {
            _g.FillRectangle(_brush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = _img;

            List<float> listX = new List<float>();
            List<float> listY = new List<float>();
        }


        /// <summary>
        /// Кнопка запускает генерацию углов
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void buttonStart_Click(object sender, EventArgs e)
        {
            _time = 0f;
            _g.FillRectangle(_brush, 0, 0, pictureBox1.Width, pictureBox1.Height); 

            _corner = new int[_N];
            _speed = new float[_N];
            _speedPoint = new PointF[_N];
            _position = new Point[_N];

            // Заполнение контейнера данными
            ClassPackegeData pack = new ClassPackegeData(ref _corner, _rnd, 0, _corner.Length);
            _myThread.startThreading(pack, ThreadCalculation.setCorner);// Генерация угла

            pack = new ClassPackegeData(ref _speed, _rnd, 0, _speed.Length);
            _myThread.startThreading(pack, ThreadCalculation.setSpeed);// генерация скорости


            pack = new ClassPackegeData(ref _speedPoint, ref _speed, ref _corner, 0, _speedPoint.Length);
            _myThread.startThreading(pack, ThreadCalculation.setVXY);// Расчёт скорости по осям

            timer1.Interval = 100;
            timer1.Start();

            Thread.Sleep(0);
        }


        /// <summary>
        /// Расчёт позиции в момент времени _time
        /// </summary>
        private void calcPosition()
        {
            ClassPackegeData pack = new ClassPackegeData(ref _position, ref _speedPoint, _time, 0, _N);
            _myThread.startThreading(pack, ThreadCalculation.calculationPositionPoint);
        }

        private void drawPicture()
        {
            _g.FillRectangle(_brush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            for (int i = 0; i < _N; i++)
            {
                _g.FillRectangle(new SolidBrush(Color.FromArgb(200, 0, 200)), _position[i].X + _centr.X, _position[i].Y + _centr.Y, 2, 2);
                _g.FillRectangle(new SolidBrush(Color.FromArgb(200, 0, 200)), _position[i].X + _centr.X, -_position[i].Y + _centr.Y, 2, 2);
                _g.FillRectangle(new SolidBrush(Color.FromArgb(200, 0, 200)), -_position[i].X + _centr.X, _position[i].Y + _centr.Y, 2, 2);
                _g.FillRectangle(new SolidBrush(Color.FromArgb(200, 0, 200)), -_position[i].X + _centr.X, -_position[i].Y + _centr.Y, 2, 2);
            }
        }

        /// <summary>
        /// Функция выполнения всего алгоритма расчёта 
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void allCalc(object sender, EventArgs e)
        {
            Thread.Sleep(0);

            this.calcPosition();

            Thread.Sleep(0);

            Thread drawThr = new Thread(this.drawPicture);
            drawThr.Start();
            drawThr.Join();

            drawThr = new Thread(setImg);
            drawThr.Start();
            Thread.Sleep(0);
            drawThr.Join();

            _time += 0.1f;
            label1.Text = Convert.ToString(_time) + " s";

            if(_time > 40)
            {
                timer1.Stop();
            }
        }

        private void setImg()=> pictureBox1.Image = _img;

        private void buttonStop_Click(object sender, EventArgs e)
        {
            timer1.Stop();
        }

        private void buttonStop_Click_1(object sender, EventArgs e)
        {
            timer1.Stop();
        }
    }
}

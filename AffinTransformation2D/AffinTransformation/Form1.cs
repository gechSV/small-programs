using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AffinTransformation
{
    public partial class Form1 : Form
    {
        private Bitmap _image;
        private Graphics _g;
        private List<Point> _figurePoint;
        private bool _figFlag = false;


        private Brush _whiteBrush;
        private Brush _blackBrush;
        private Pen _blackPen;

        private int _xCentr;
        private int _yCentr;

        public Form1()
        {
            InitializeComponent();
            _figurePoint = new List<Point>();
            _image = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            _g = Graphics.FromImage(_image);
            _whiteBrush = new SolidBrush(Color.FromArgb(255, 255, 255));
            _blackBrush = new SolidBrush(Color.FromArgb(0, 0, 0));
            _blackPen = new Pen(_blackBrush);
            _g.FillRectangle(_whiteBrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = _image;
            _xCentr = pictureBox1.Width / 2;
            _yCentr = pictureBox1.Height / 2;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            _g.FillRectangle(_whiteBrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            int a = Convert.ToInt32(textBox1.Text);

            float rad = (float)((a * Math.PI) / 180);
            Point pointC = new Point(0, 0);
            for (int i = 0; i < _figurePoint.Count; i++)
            {
                _figurePoint[i] = ClassAffin.CalcAnglePoint(rad, _figurePoint[i], pointC);
            }

            for (int i = 0; i < _figurePoint.Count - 1; i++)
            {
                _g.DrawLine(_blackPen, _figurePoint[i].X + _xCentr, _figurePoint[i].Y + _yCentr,
                        _figurePoint[i + 1].X + _xCentr, _figurePoint[i + 1].Y + _yCentr);
            }

            _g.DrawLine(_blackPen, _figurePoint[0].X + _xCentr, _figurePoint[0].Y + _yCentr,
                        _figurePoint[_figurePoint.Count - 1].X + _xCentr, _figurePoint[_figurePoint.Count - 1].Y + _yCentr);
            pictureBox1.Image = _image;
        }

        /// <summary>
        /// Тык делаешь по картинке и линия рисоват
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void pictureBox1_MouseClick(object sender, MouseEventArgs e)
        {
            //проверка возможен ли перенос события e в я MouseEventArgs, если да то переносит, нет - null
            var mouseEventArgs = e as MouseEventArgs;
            if (mouseEventArgs != null)
            {
                var P = new Point(mouseEventArgs.X - _xCentr, mouseEventArgs.Y - _yCentr);
                _figurePoint.Add(P);
                if(_figurePoint.Count > 1)
                {
                    _g.DrawLine(_blackPen, _figurePoint[_figurePoint.Count-2].X + _xCentr, _figurePoint[_figurePoint.Count - 2].Y + _yCentr, 
                        _figurePoint[_figurePoint.Count - 1].X + _xCentr, _figurePoint[_figurePoint.Count - 1].Y + _yCentr);
                    pictureBox1.Image = _image;
                }
            }
        }


        /// <summary>
        /// Двойной тык замыкат фигуру
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void pictureBox1_DoubleClick(object sender, EventArgs e)
        {
            //проверка возможен ли перенос события e в я MouseEventArgs, если да то переносит, нет - null
            var mouseEventArgs = e as MouseEventArgs;
            if (mouseEventArgs != null)
            {
                var P = new Point(mouseEventArgs.X - _xCentr, mouseEventArgs.Y - _yCentr);
                _figurePoint.Add(P);
                if (_figurePoint.Count > 1)
                {
                    _g.DrawLine(_blackPen, _figurePoint[_figurePoint.Count - 1].X + _xCentr, _figurePoint[_figurePoint.Count - 1].Y + _yCentr,
                        _figurePoint[0].X + _xCentr, _figurePoint[0].Y + _yCentr);
                    pictureBox1.Image = _image;
                    _figFlag = true;
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            _g.FillRectangle(_whiteBrush, 0, 0, pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = _image;
            _figurePoint.Clear();
        }
    }
}

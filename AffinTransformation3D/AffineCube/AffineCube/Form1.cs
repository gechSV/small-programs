using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AffineCube
{
    public partial class Form1 : Form
    {
        Bitmap _image;
        Graphics _g;
        Brush _brushBlack;
        Brush _brushWhite;
        Pen _pen;

        CDrawCube _Cubic;

        int _xContrl = 0, _yContrl = 0, _zContrl = 0, _dContrl = 10;

        public Form1()
        {
            InitializeComponent();
            _image = new Bitmap(pictureBox1.Width, pictureBox1.Height);
            _g = Graphics.FromImage(_image);
            _brushBlack = new SolidBrush(Color.FromArgb(25, 25, 25));
            _brushWhite = new SolidBrush(Color.FromArgb(255, 255, 255));
            _pen = new Pen(_brushWhite);
            _g.FillRectangle(_brushBlack, 0, 0, pictureBox1.Width, pictureBox1.Height);
            pictureBox1.Image = _image;

            _Cubic = new CDrawCube();
            _Cubic.SetCubePoint(1, 1, 1, 100);
            _Cubic.ProjectVertex(pictureBox1.Width / 2, pictureBox1.Height / 2, 0, 0, 0, _dContrl);

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(2));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(2), _Cubic.GetCubePointConvas(3));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(3), _Cubic.GetCubePointConvas(4));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(4));

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(5), _Cubic.GetCubePointConvas(6));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(6), _Cubic.GetCubePointConvas(7));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(7), _Cubic.GetCubePointConvas(8));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(5), _Cubic.GetCubePointConvas(8));

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(5));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(2), _Cubic.GetCubePointConvas(6));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(3), _Cubic.GetCubePointConvas(7));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(4), _Cubic.GetCubePointConvas(8));
        }


        private void DrowCube(int xCtr, int yCtr, int zCtr, int D)
        {
            _g.FillRectangle(_brushBlack, 0, 0, pictureBox1.Width, pictureBox1.Height);
            _Cubic.ProjectVertex(pictureBox1.Width / 2, pictureBox1.Height / 2, xCtr, yCtr, xCtr, D);

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(2));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(2), _Cubic.GetCubePointConvas(3));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(3), _Cubic.GetCubePointConvas(4));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(4));

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(5), _Cubic.GetCubePointConvas(6));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(6), _Cubic.GetCubePointConvas(7));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(7), _Cubic.GetCubePointConvas(8));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(5), _Cubic.GetCubePointConvas(8));

            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(1), _Cubic.GetCubePointConvas(5));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(2), _Cubic.GetCubePointConvas(6));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(3), _Cubic.GetCubePointConvas(7));
            _g.DrawLine(_pen, _Cubic.GetCubePointConvas(4), _Cubic.GetCubePointConvas(8));
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Left)
            {
                _xContrl++;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.Right)
            {
                _xContrl--;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.Up)
            {
                _yContrl++;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.Down)
            {
                _yContrl--;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.Z)
            {
                _dContrl--;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.X)
            {
                _dContrl++;
                DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
                pictureBox1.Image = _image;
            }

            if (e.KeyCode == Keys.C)
            {
                AffinY();
            }

            if (e.KeyCode == Keys.V)
            {
                AffinX();
            }

            if (e.KeyCode == Keys.B)
            {
                AffinZ();
            }
        }

        private void AffinY()
        {
            float a = 2;
            a = (float)(a * Math.PI / 180);

            float[,] matrY = new float[,]{{(float)Math.Cos(-a), 0, -(float)Math.Sin(-a)},
                                          {0,                   1,                    0},
                                          {(float)Math.Sin(-a), 0,  (float)Math.Cos(-a)}}; 

            for (int i = 1; i < 9; i++)
            {
                float[] xyz, bufArr = new float[] {0, 0, 0};
                xyz = _Cubic.GetCubePointXYZ(i);

                for (int j = 0; j < 3; j++)
                {
                    bufArr[j] = xyz[0] * matrY[j, 0] + xyz[1] * matrY[j, 1] + xyz[2] * matrY[j, 2]; 
                }


                _Cubic.SetCubePointXYZ(bufArr, i);
            }

            DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
            pictureBox1.Image = _image;
        }


        private void AffinX()
        {
            float a = 2;
            a = (float)(a * Math.PI / 180);

            float[,] matrX = new float[,]{{1,                   0,                  0},  
                                          {0, (float)Math.Cos(a), -(float)Math.Sin(a)},
                                          {0, (float)Math.Sin(a),  (float)Math.Cos(a)}};

            for (int i = 1; i < 9; i++)
            {
                float[] xyz, bufArr = new float[] { 0, 0, 0 };
                xyz = _Cubic.GetCubePointXYZ(i);

                for (int j = 0; j < 3; j++)
                {
                    bufArr[j] = xyz[0] * matrX[j, 0] + xyz[1] * matrX[j, 1] + xyz[2] * matrX[j, 2];
                }


                _Cubic.SetCubePointXYZ(bufArr, i);
            }

            DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
            pictureBox1.Image = _image;
        }

        private void AffinZ()
        {
            float a = 2;
            a = (float)(a * Math.PI / 180);

            float[,] matrX = new float[,]{{(float)Math.Cos(a),-(float)Math.Sin(a), 0},
                                          {(float)Math.Sin(a), (float)Math.Cos(a), 0},
                                          {0,                   0,                 1}};

            for (int i = 1; i < 9; i++)
            {
                float[] xyz, bufArr = new float[] { 0, 0, 0 };
                xyz = _Cubic.GetCubePointXYZ(i);

                for (int j = 0; j < 3; j++)
                {
                    bufArr[j] = xyz[0] * matrX[j, 0] + xyz[1] * matrX[j, 1] + xyz[2] * matrX[j, 2];
                }


                _Cubic.SetCubePointXYZ(bufArr, i);
            }

            DrowCube(_xContrl, _yContrl, _zContrl, _dContrl);
            pictureBox1.Image = _image;
        }

    }
}

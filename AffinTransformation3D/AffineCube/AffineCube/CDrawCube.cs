using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AffineCube
{
    class CDrawCube
    {
        //****************************************\\
        //Cx и Cy координаты пикселя на холсте
        //Cw и Ch высота и ширина холста
        //Vm и Vh высота и ширина окна просмотра
        //Vx и Vy начальные координаты точки
        //****************************************\\

        public class PointXYZ
        {
            private float _x;
            private float _y;
            private float _z;

            public float X
            {
                set
                {
                    _x = value;
                }
                get
                {
                    return _x;
                }
            }

            public float Y
            {
                set
                {
                    _y = value;
                }
                get
                {
                    return _y;
                }
            }

            public float Z
            {
                set
                {
                    _z = value;
                }
                get
                {
                    return _z;
                }
            }

            public PointXYZ(){}
        }

        /// <summary>
        /// Массив, хранит координаты куба
        /// </summary>
        private PointXYZ[] _cubePoint;

        private PointXYZ[] _cubePointConvas;

        private int _Cw = 4;
        private int _Ch = 4;

        private int _Vw = 1;
        private int _Vh = 1;

        private int _d = 100;

        public CDrawCube()
        {
            _cubePoint = new PointXYZ[8];
            _cubePointConvas = new PointXYZ[8];
            for (int i = 0; i < 8; i++)
            {
                _cubePoint[i] = new PointXYZ();
                _cubePointConvas[i] = new PointXYZ();
            }
        }

        /// <summary>
        /// Автоматическая генерация вершин куба
        /// </summary>
        /// <param name="x"> Верхняя точка лицевой плоскости</param>
        /// <param name="y"> Крайняя левая точка лицевой плоскости</param>
        /// <param name="h"> Длина граней </param>
        public void SetCubePoint(float x, float y, float z, float h)
        {
            _cubePoint[0].X = -1;
            _cubePoint[0].Y = 1;
            _cubePoint[0].Z = -1;

            _cubePoint[1].X = 1;
            _cubePoint[1].Y = 1;
            _cubePoint[1].Z = -1;

            _cubePoint[2].X = 1;
            _cubePoint[2].Y = -1;
            _cubePoint[2].Z = -1;

            _cubePoint[3].X = -1;
            _cubePoint[3].Y = -1;
            _cubePoint[3].Z = -1;

            _cubePoint[4].X = -1;
            _cubePoint[4].Y = 1;
            _cubePoint[4].Z = 1;

            _cubePoint[5].X = 1;
            _cubePoint[5].Y = 1;
            _cubePoint[5].Z = 1;

            _cubePoint[6].X = 1;
            _cubePoint[6].Y = -1 ;
            _cubePoint[6].Z = 1;

            _cubePoint[7].X = -1;
            _cubePoint[7].Y = -1;
            _cubePoint[7].Z = 1;
        }

        public Point GetCubePointConvas(int i)
        {
            Point ret = new Point();
            ret.X = (int)Math.Round(_cubePointConvas[i-1].X);
            ret.Y = (int)Math.Round(_cubePointConvas[i-1].Y);
            return ret;
        }

        public float[] GetCubePointXYZ(int i)
        {
            float[] ret = new float[3];
            ret[0] = _cubePoint[i - 1].X;
            ret[1] = _cubePoint[i - 1].Y;
            ret[2] = _cubePoint[i - 1].Z;
            return ret;
        }

        public void SetCubePointXYZ(float[] arr, int i)
        {
            _cubePoint[i - 1].X = arr[0];
            _cubePoint[i - 1].Y = arr[1];
            _cubePoint[i - 1].Z = arr[2];
        }

        /// <summary>
        /// установка размеров холста
        /// </summary>
        /// <param name="width"> ширина </param>
        /// <param name="height"> высота </param>
        public void SetSizeConvas(int width, int height)
        {
            _Cw = width;
            _Ch = height;
        }

        /// <summary>
        /// установка размеров окна просмотра
        /// </summary>
        /// <param name="width"> ширина </param>
        /// <param name="height"> высота </param>
        public void SetSizeViewWindow(int width, int height)
        {
            _Vw = width;
            _Vh = height;
        }

        private float[] ViewportToCanvas(float x, float y)
        {
            float[] ret = new float[2];
            
            ret[0] = x * _Cw / _Vw;
            ret[1] = y * _Ch / _Vh;

            return ret;
        }

        public void ProjectVertex(float xCenter, float yCenter, float x, float y, float z, float D)
        {
            float[] buff;
            for (int i = 0; i < 8; i++)
            {
                buff = ViewportToCanvas((_cubePoint[i].X + x) * D / (_Vw+10), (_cubePoint[i].Y + y)* D / (_Vh+10));
                _cubePointConvas[i].X = buff[0] + xCenter;
                _cubePointConvas[i].Y = buff[1] + yCenter;
            }
        }



    }
}

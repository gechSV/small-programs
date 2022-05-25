using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/// <summary>
/// Класс предназначенный для передачи необходимых данных в поток
/// </summary>
namespace parallelLab
{
    public class ClassPackegeData
    {
        public int[] _intArr;
        public float[] _floatArr;
        public Point[] _pointInt;
        public PointF[] _pointF;
        public int _from;
        public int _to;
        public delegate void funcDel(object obj);
        public Bitmap _bitmap;
        public Color _color;
        public Point _centr;

        public float _time; 

        public bool flagIntArr = false,
                    flagFloatArr = false,
                    flagPointFArr = false,
                    flagPointIntArr = false,
                    flagBitmap = false;

        public Random rnd;


        public ClassPackegeData(){}

        public ClassPackegeData(ref int[] intArr, Random R, int from = 0, int to = 0) 
        {
            flagIntArr = true;
            _intArr = intArr;
            _from = from;
            _to = to;
            rnd = R;
        }

        public ClassPackegeData(ref float[] floatArr, Random R, int from = 0, int to = 0)
        {
            flagFloatArr = true;
            _floatArr = floatArr;
            _from = from;
            _to = to;
            rnd = R;
        }

        public ClassPackegeData(ref Point[] PInt, ref PointF[] PF, float tm, int from = 0, int to = 0)
        {
            flagPointIntArr = true;
            _pointInt = PInt;
            _pointF = PF;
            _time = tm;
            _from = from;
            _to = to;
        }

        public ClassPackegeData(ref PointF[] point, ref float[] floatArr, ref int[] intArr, int from = 0, int to = 0)
        {
            flagPointFArr = true;
            _floatArr = floatArr;
            _intArr = intArr;
            _pointF = point;
            _from = from;
            _to = to;
        }

        public ClassPackegeData(ref Bitmap img, ref Point[] point, Color clr, Point cntr, int from, int to)
        {
            flagBitmap = true;
            _bitmap = img;
            _pointInt = point;
            _color = clr;
            _centr = cntr;
            _from = from;
            _to = to;
        }
    }
}

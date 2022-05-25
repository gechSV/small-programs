using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace AffinTransformation
{
    static class ClassAffin
    {
        /// <summary>
        /// Посчитать координаты точки повернутой на Angle радиан
        /// </summary>
        /// <param name="angle"> Угол поворота в радианах</param>
        /// <param name="A"> Координаты точки </param>
        /// <param name="C"> Координаты центра </param>
        static public Point CalcAnglePoint(float angle, Point A, Point C)
        {
            //Есть погрешность из-за round, что вытекает в смещение. Можно пофиксить поменяв int на float и не округлять точки, но мне лень
            Point resP = new Point();
            resP.X = (int)Math.Round(A.X * Math.Cos(angle) - A.Y * Math.Sin(angle) + C.X);
            resP.Y = (int)Math.Round(A.X * Math.Sin(angle) + A.Y * Math.Cos(angle) + C.Y);
            return resP;
        }
    }
}

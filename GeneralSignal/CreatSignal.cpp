#include "generalsignal.h"
#include "ui_generalsignal.h"
#include "math.h"

void CreatMass(double *mass)
{
    //mass = new double[SIZE_MASS];
}
void DelMass(double *mass)
{
    free(mass);
}
//! Функция формирования синусоидального/косинусоидального сигнала
void CreatSignal (double *mass, int sign, ParamSignal prmsgn)
{
    for(int i = 0; i < SIZE_MASS; i++)
    {
        double x = prmsgn.T * i;
        if (sign == 0)
        {
            mass[i] = prmsgn.I * sin(prmsgn.F_angle * x / SIZE_MASS + prmsgn.F_start);
             x= prmsgn.T * i;
        }
        if (sign == 1)
        {
            mass[i]  = prmsgn.I * cos(prmsgn.F_angle * x / SIZE_MASS + prmsgn.F_start);
            x = prmsgn.T * i;
        }
    }

}

#ifndef PARAMSIGNAL_H
#define PARAMSIGNAL_H
#include <stdlib.h>
#define SIZE_MASS 1000

struct ParamSignal
{
    double I; //!< Амплитуда колебаний
    double F_angle; //!< Угловая частота
    double f; //!< Частота изменения сигнала
    double T; //!< Период повторения
    double F_start; //!< Начальная фаза
};
extern ParamSignal prm_signal;

void CreatSignal (double *mass, int sign, ParamSignal prmsgn);
void CreatMass(double*& mass);
void DelMass(double *mass);

#endif // PARAMSIGNAL_H



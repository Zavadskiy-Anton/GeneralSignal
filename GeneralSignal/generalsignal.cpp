#include "generalsignal.h"
#include "ui_generalsignal.h"
#include "ParamSignal.h"

GeneralSignal::GeneralSignal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GeneralSignal)
{
    ui->setupUi(this); 
}
GeneralSignal::~GeneralSignal()
{
    delete ui;
}

void GeneralSignal::DragGraph(void)
{
   QChart *widget = new QChart;
   ui->graphicsView->setChart(widget);

   QLineSeries* series = new QLineSeries();

   float Xx, Yy;
   Xx = 0;
    for(float i = 0; i<500; i++)
    {

        if(ui->radioButton->isChecked())
        {
            Yy = sin(Xx);
        }
        if(ui->radioButton_2->isChecked())
        {
            Yy = cos(Xx);
        }
        series->append(Xx, Yy);
        Xx = i * 0.1;
    }

   widget->addSeries(series);
   widget->createDefaultAxes();

}
void GeneralSignal::DragSig(double *mass, ParamSignal prmsgn)
{
    QChart *widget = new QChart;
    ui->graphicsView->setChart(widget);

    QLineSeries* series = new QLineSeries();

    for(int i = 0; i < SIZE_MASS; i++)
    {
        double x =  prmsgn.T * i;
        double y =  mass[i];
        series->append(x,y);

    }
    widget->addSeries(series);
    widget->createDefaultAxes();
}
void GeneralSignal::on_pushButton_clicked()
{
   //DragGraph();
   //! Создание динамического масива значений сигнала
   double *mass;// = new double[SIZE_MASS];
   CreatMass(mass);
   //! Структура параметров сигнала
   ParamSignal param_sign;
   param_sign.I = ui->doubleSpinBox_2->value(); //32000;
   param_sign.f = ui->spinBox_2->value(); //500;
   param_sign.T = ui->doubleSpinBox_3->value()/100; //0.01;
   param_sign.F_angle = 2 * M_PI * param_sign.f;
   param_sign.F_start = ui->doubleSpinBox_5->value();// 0.5;
   int sign;
   if (ui->radioButton->isChecked()) sign = 0;
   else sign = 1;

   CreatSignal(mass, sign, param_sign);
   DragSig(mass, param_sign);

   DelMass(mass);
}

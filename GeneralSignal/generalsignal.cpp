#include "generalsignal.h"
#include "ui_generalsignal.h"

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
   QString jopa = "jopa";
   widget->setTitle(jopa);

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

void GeneralSignal::on_pushButton_clicked()
{
   DragGraph();
}

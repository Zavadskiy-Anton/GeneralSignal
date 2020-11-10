#include "generalsignal.h"
#include "ParamSignal.h"

#include <QApplication>

#include "ui_generalsignal.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneralSignal w;
    w.show();

    QMainWindow *widget = new QMainWindow;
    Ui::GeneralSignal ui;

    ui.setupUi(widget);



    return a.exec();

}


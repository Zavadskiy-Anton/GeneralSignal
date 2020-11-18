#ifndef GENERALSIGNAL_H
#define GENERALSIGNAL_H

#include <QMainWindow>
#include "ParamSignal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GeneralSignal; }
QT_END_NAMESPACE

class GeneralSignal : public QMainWindow
{
    Q_OBJECT

public:
    GeneralSignal(QWidget *parent = nullptr);
    void DragGraph(void);

    void DragSig(double *mass, ParamSignal prmsgn);

    ~GeneralSignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GeneralSignal *ui;
};
#endif // GENERALSIGNAL_H

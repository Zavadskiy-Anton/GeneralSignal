#ifndef GENERALSIGNAL_H
#define GENERALSIGNAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GeneralSignal; }
QT_END_NAMESPACE

class GeneralSignal : public QMainWindow
{
    Q_OBJECT

public:
    GeneralSignal(QWidget *parent = nullptr);
    void DragGraph(void);

    ~GeneralSignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GeneralSignal *ui;
};
#endif // GENERALSIGNAL_H

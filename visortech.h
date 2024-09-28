#ifndef VISORTECH_H
#define VISORTECH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class VisorTech;
}
QT_END_NAMESPACE

class VisorTech : public QMainWindow
{
    Q_OBJECT

public:
    VisorTech(QWidget *parent = nullptr);
    ~VisorTech();

private:
    Ui::VisorTech *ui;
};
#endif // VISORTECH_H

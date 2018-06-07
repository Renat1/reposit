#ifndef AGE_H
#define AGE_H

#include <QMainWindow>

namespace Ui {
    class Age;
}

class Age : public QMainWindow
{
    Q_OBJECT

public:
    explicit Age(QWidget *parent = 0);
    ~Age();

private:
    Ui::Age *ui;
};

#endif // AGE_H

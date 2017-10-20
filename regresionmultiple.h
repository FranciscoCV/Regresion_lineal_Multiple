#ifndef REGRESIONMULTIPLE_H
#define REGRESIONMULTIPLE_H

#include <QMainWindow>

namespace Ui {
class RegresionMultiple;
}

class RegresionMultiple : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegresionMultiple(QWidget *parent = 0);
    ~RegresionMultiple();
    double D[3][4];
    double A[8], B[8], C[8], E[8], F[8];

private:
    Ui::RegresionMultiple *ui;
public slots:
    void metodo();
    void borrar();
};

#endif // REGRESIONMULTIPLE_H

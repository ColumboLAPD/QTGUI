#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <QWidget>
#include <QPushButton>
#include <QApplication>
#include <QLabel>

class PlusMinus : public QWidget
{
    Q_OBJECT
public:
    explicit PlusMinus(QWidget *parent = nullptr);

signals:

private slots:
    void onPlus();
    void onMinus();

private:
    QLabel *lbl;
};

#endif // PLUSMINUS_H

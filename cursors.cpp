#include "cursors.h"
#include "mybutton.h"

Cursors::Cursors(QWidget *parent) : QWidget(parent)
{
    QFrame *frame1 = new QFrame(this);
    frame1->setToolTip("frame1");
    frame1 ->setFrameStyle(QFrame::Box);
    frame1->setCursor(Qt::SizeAllCursor);

    QFrame *frame2 = new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);
    frame2->setCursor(Qt::WaitCursor);

    QFrame *frame3 = new QFrame(this);
    frame3->setFrameStyle(QFrame::Box);
    frame3->setCursor(Qt::PointingHandCursor);

    MyButton *quitBtn = new MyButton(this);

    QGridLayout *grid1 = new QGridLayout(this);
    grid1->addWidget(frame1, 0, 0);
    grid1->addWidget(frame2, 0, 1);
    grid1->addWidget(frame3, 1, 0);
    grid1->addWidget(quitBtn, 1, 1);


    setLayout(grid1);
}

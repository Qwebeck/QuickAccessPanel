#ifndef CLICKABLE_LABEL_H
#define CLICKABLE_LABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QEvent>
#include <QDebug>

class Clickable_Label : public QLabel
{
    Q_OBJECT
public:
    explicit Clickable_Label(QWidget *parent=0);

    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void leave_Event(QEvent *);

    int mouse_x,mouse_y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

public slots:

};

#endif // CLICKABLE_LABEL_H

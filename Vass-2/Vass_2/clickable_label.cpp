#include "clickable_label.h"

Clickable_Label::Clickable_Label(QWidget *parent):QLabel (parent)
{

}

void Clickable_Label::mouseMoveEvent(QMouseEvent *ev)
{
    this->mouse_x = ev->x();
    this->mouse_y = ev->y();
    emit Mouse_Pos();
}

void Clickable_Label::mousePressEvent(QMouseEvent *ev)
{
    emit Mouse_Pressed();
}
void Clickable_Label::leave_Event(QEvent *)
{
    emit Mouse_Left();
}

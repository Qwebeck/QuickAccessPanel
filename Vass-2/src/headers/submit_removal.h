#ifndef SUBMIT_REMOVAL_H
#define SUBMIT_REMOVAL_H

#include <QDialog>

namespace Ui {
class submit_removal;
}

class submit_removal : public QDialog
{
    Q_OBJECT

public:
    explicit submit_removal(QWidget *parent = nullptr);
    ~submit_removal();

private:
    Ui::submit_removal *ui;
};

#endif // SUBMIT_REMOVAL_H

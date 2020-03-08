#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
#include <regex>
#include <vector>
//#include"shortcut.h"
#include "headers/shortcut_v.h"

namespace Ui {
    class config;
}

class config : public QWidget {
    Q_OBJECT
public:
    explicit config(QWidget *parent = nullptr);

    ~config();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

    void wheelEvent(QWheelEvent *event) override;


    signals:
    void changeHotKey();

    void iconsChanged();

private
    slots:

    void on_b_up_clicked();

    void on_b_down_clicked();

    void on_app_1_clicked();

    void on_app_2_clicked();

    void on_app_3_clicked();

    void on_app_4_clicked();

    void on_app_5_clicked();

    void on_app_6_clicked();

    void on_app_7_clicked();

    void on_app_8_clicked();

    void on_info_clicked();

    void on_add_clicked();

    void on_remove_clicked();

    void on_pushButton_clicked();

    void on_p_ins_i_stateChanged(int arg1);

    void on_chnge_icon_clicked();

    void on_chnge_icon_2_clicked();

    void on_always_first_stateChanged(int arg1);

    void on_submit_clicked();

private:
    Ui::config *ui;

    bool _removal;
    bool isMouseDown = true;
    bool _icon_info_active;
    int _active_element;
    int _current_page;
    shortcut_v *shortcuts;
    std::vector<QPushButton *> _app_buttons;


    QPoint mousePosition;

    void initShortcut(QPushButton *app, int current_position);

    void setIcon(QPushButton *button, int current_icon);

    void setStyle(bool mouse_wheel = false);

    void increasePage();

    void decreasePage();

    void wCheckInit(int);

public
    slots:
            void

    fill_shortcuts();


};

#endif // CONFIG_H

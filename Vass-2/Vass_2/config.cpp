#include "config.h"
#include<QFileDialog>
#include "ui_config.h"
config::config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
    shortcuts = shortcut_v::Initialialize();
    _app_buttons ={ui->app_1,ui->app_2,ui->app_3,ui->app_4,ui->app_5,ui->app_6,ui->app_7,ui->app_8};
    _current_page = 0;
    _active_element = -1;
    ui->stackedWidget->setCurrentWidget(ui->page_4);
    _icon_info_active = false;
    ui->i_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_icons_mod)) + QKeySequence(shortcuts->_icons).toString());

    ui->c_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_config_mod)) + QKeySequence(shortcuts->_config).toString());


    fill_shortcuts();
}


config::~config()
{

    delete ui;

}



void config::mouseMoveEvent(QMouseEvent *event)
{
    if (isMouseDown)
    {
        mousePosition=event->globalPos();
        move(mousePosition.rx() - this->width()/5,mousePosition.ry() - this->height()/5);
    }
}

void config::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        isMouseDown=true;
    }
}

void config::fill_shortcuts()
{
    int end = 0;
    int i = 0;
    if(_current_page+8<shortcuts->_shortcuts_class.size())end = _current_page + 8;
    else end=shortcuts->_shortcuts_class.size();
    for(i=_current_page;i<end;++i)
    {
        initShortcut(_app_buttons[i%_app_buttons.size()],i);
    }
    for(;i<_current_page+8;++i)
    {
        _app_buttons[i%_app_buttons.size()]->hide();

    }
    setStyle();
    emit iconsChanged();
}

void config::initShortcut(QPushButton * app , int current_position)
{
    app->show();

    app->setText(QString::fromStdString(shortcuts->_shortcuts_class[current_position].get_filename()));
    setIcon(app,current_position);


};

void config::setIcon( QPushButton * button,int current_icon)
{
    QPixmap icon(shortcuts->_shortcuts_class[current_icon].get_path_to_icon());
    icon = icon.scaled(button->width()/10,button->width()/10,Qt::KeepAspectRatio);
    button->setIcon(icon);
    button ->setIconSize(icon.rect().size());
//    label -> setPixmap(icon.scaled(label->width(),label->height(),Qt::KeepAspectRatio));

};


void config::on_b_up_clicked()
{
    if(_active_element == 0) return;
    std::swap(shortcuts -> _shortcuts_class[_active_element],shortcuts -> _shortcuts_class[_active_element-1]);
    _active_element -= 1;
    decreasePage();
    fill_shortcuts();

}

void config::on_b_down_clicked()
{
    if(_active_element < shortcuts -> _shortcuts_class.size() - 1){
    qDebug() << _active_element;
    qDebug() << shortcuts -> _shortcuts_class.size();
     std::swap(shortcuts -> _shortcuts_class[_active_element],shortcuts -> _shortcuts_class[_active_element+1]);
     _active_element += 1;
     increasePage();
    fill_shortcuts();
    }
}

void config::setStyle(bool mouse_wheel)
{
    for(unsigned int i = 0;i<8;++i)
    {
        if(i == _active_element%(8) && !mouse_wheel)
        {
           _app_buttons[i]-> setStyleSheet("QPushButton{background-color:rgba(38, 214, 33,0.4);border: 1px solid gray;border-radius:10px ; padding-top:0px}QPushButton:hover{background-color:rgba(38, 214, 33,1);}");
        }else {
           _app_buttons[i]-> setStyleSheet("QPushButton{background-color:white}");
}
    }
    wCheckInit(_active_element);
}
void config::on_app_1_clicked()
{
_active_element = 0 + _current_page;
setStyle();
}

void config::on_app_2_clicked()
{
    _active_element = 1 + _current_page;
    setStyle();
}

void config::on_app_3_clicked()
{
    _active_element = 2 + _current_page;
    setStyle();
}

void config::on_app_4_clicked()
{
    _active_element = 3 + _current_page;
    setStyle();
}

void config::on_app_5_clicked()
{
    _active_element = 4 + _current_page;
    setStyle();
}

void config::on_app_6_clicked()
{
    _active_element = 5 + _current_page;
    setStyle();
}

void config::on_app_7_clicked()
{
    _active_element = 6 + _current_page;
    setStyle();
}

void config::on_app_8_clicked()
{
    _active_element = 7 + _current_page;
    setStyle();
}

void config::on_info_clicked()
{
    if(!_icon_info_active){
    ui->stackedWidget->setCurrentWidget(ui->page_3);
    ui->info->setText(tr("Show\nsettings"));
    _icon_info_active=true;
    }else {
        ui->stackedWidget->setCurrentWidget(ui->page_4);
        ui->info->setText(tr("Hide\nsettings"));
        _icon_info_active=false;
}
}

void config::on_add_clicked()
{
    QStringList filenames = QFileDialog::getOpenFileNames(this,QString("Choose shortcut"),"/","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    if(filenames.isEmpty())return;
    std::string tmp;
    for (int i=0;i<filenames.count();i++)
     {   tmp=filenames[i].toStdString();
        shortcuts->parse_names(filenames[i]);
     }

    fill_shortcuts();
}

void config::on_remove_clicked()
{
    if(_active_element!=-1)
    {
        shortcuts->_shortcuts_class.erase(shortcuts->_shortcuts_class.begin() + _active_element);
    }

    fill_shortcuts();
}


void config::increasePage()
{
    if(_active_element%8==0 and _current_page+8<shortcuts->_shortcuts_class.size())
    {
        _current_page += 8;
        setStyle();
    }
}
void config::decreasePage()
{
//means that this object os on the top
    qDebug()<<"Decreese" << _active_element;
    if(_active_element%8==7)
    {
        qDebug()<<"called";
        _current_page -= 8;
        setStyle();

    }
}
void config::wheelEvent(QWheelEvent *event)
{

    QPoint degrees = event -> angleDelta();
    qDebug()<<degrees.ry()<<degrees.rx()<<_current_page;
    if((degrees.ry()<0) && (_current_page + 8 < shortcuts->_shortcuts_class.size())){
        _current_page += 8;
        fill_shortcuts();
    }
    else if (_current_page > 0 && degrees.ry()>0){
        _current_page -=8;
        fill_shortcuts();
    }

    setStyle(true); // true - called from mouse event
}

void config::on_pushButton_clicked()
{
    shortcuts->_shortcuts_class.clear();
    fill_shortcuts();
}

void config::on_p_ins_i_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        for(auto& icon:shortcuts->_shortcuts_class)
        {
            if(icon.is_img())
            {
                icon.changeIcon(icon.get_path());
            }
        }
    }else {
        for(auto& icon:shortcuts->_shortcuts_class)
        {
            if(icon.is_img())
            {
                icon.changeIcon(QString::fromStdString(":/icons/images/picture.png"));
            }
        }

    }
    fill_shortcuts();
}

void config::on_chnge_icon_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,QString("Choose shortcut"),"/","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    if(filename.isEmpty())return;
    std::string tmp;
    shortcuts->_shortcuts_class[_active_element].changeIcon(filename);
    fill_shortcuts();
}

void config::on_chnge_icon_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,QString("Choose shortcut"),"/","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    if(filename.isEmpty())return;
    std::string tmp;
    shortcuts->_shortcuts_class[_active_element].changeLocation(filename);
}

void config::on_always_first_stateChanged(int arg1)
{
    std::string filename = shortcuts->_shortcuts_class[_active_element].get_filename();
    if(arg1==Qt::Checked)
    {
        shortcuts->_summirized_weight += 1;
        shortcuts->_shortcuts_class[_active_element].increase_weight(shortcuts->_summirized_weight);
//        sort(shortcuts->_shortcuts_class.begin(),shortcuts->_shortcuts_class.end());
        int current = _active_element;
        while (shortcuts->_shortcuts_class[current].get_weight()!=0 && current > 0) {
            std::swap(shortcuts->_shortcuts_class[current],shortcuts->_shortcuts_class[current-1]);
            --current;
        }

        for(int i=0;i<shortcuts->_shortcuts_class.size();++i)
        {
            if(shortcuts->_shortcuts_class[i].get_filename() == filename)
            {
                _active_element = i;
                _current_page = i - i%8;
                break;
            };
        }
    }
    else if(shortcuts->_shortcuts_class[_active_element].get_weight() != 0) {
         int current = 0;
         shortcuts->_summirized_weight -= shortcuts->_shortcuts_class[_active_element].get_weight();
         shortcuts->_shortcuts_class[_active_element].relax_weight();
         while (shortcuts->_shortcuts_class[current+1].get_weight()!=0 && current < shortcuts->_shortcuts_class.size()) {
             std::swap(shortcuts->_shortcuts_class[current],shortcuts->_shortcuts_class[current+1]);
             ++current;
         }

         for(int i=0;i<shortcuts->_shortcuts_class.size();++i)
         {
             if(shortcuts->_shortcuts_class[i].get_filename() == filename)
             {
                 _active_element = i;
                 _current_page = i - i%8;
                 break;
             };
         }



    }
    fill_shortcuts();
}


void config::wCheckInit(int el)
{
    qDebug()<<"Element" << el;
    if (el == -1)return;
    qDebug()<<"Weight" << shortcuts -> _shortcuts_class[el].get_weight();
    if (shortcuts->_shortcuts_class[el].get_weight() == 0){

        ui->always_first->setCheckState(Qt::Unchecked);
    }else {
        ui->always_first->setCheckState(Qt::Checked);
}
}





void config::on_submit_clicked()
{
    QStringList seq = ui->icon->keySequence().toString().split("+");
    if(seq.size()>1){
        shortcuts->_icons_mod = shortcuts ->return_modifier(seq[0]);
        shortcuts->_icons = shortcuts->return_key_code(seq[1]);
    }

    else if(!seq[0].isEmpty()) shortcuts->_icons = shortcuts->return_key_code(seq[0]);

    //seq = ui->media->keySequence().toString().split("+");
    //if(seq.size()>1){
        //shortcuts->_player_mod = shortcuts ->return_modifier(seq[0]);
        //shortcuts->_player = shortcuts->return_key_code(seq[1]);
   // }
     //   else if(!seq[0].isEmpty()) shortcuts->_player = shortcuts->return_key_code(seq[0]);

    /*seq = ui->time->keySequence().toString().split("+");
    if(seq.size()>1){
        shortcuts->_time_mod = shortcuts ->return_modifier(seq[0]);
        shortcuts->_time= shortcuts->return_key_code(seq[1]);

    }else if(!seq[0].isEmpty()) shortcuts->_time= shortcuts->return_key_code(seq[0]);
    qDebug()<<"Unchanged shortuc time "<<seq << " dd ";
*/
    seq = ui->config_2->keySequence().toString().split("+");
    if(seq.size()>1)
    {
        shortcuts->_config_mod = shortcuts ->return_modifier(seq[0]);
        shortcuts->_config = shortcuts->return_key_code(seq[1]);
    }
        else if(!seq[0].isEmpty()) shortcuts->_config = shortcuts->return_key_code(seq[0]);

    emit changeHotKey();
    ui->i_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_icons_mod)) + QKeySequence(shortcuts->_icons).toString());
    //ui->t_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_time_mod)) + QKeySequence(shortcuts->_time).toString());
    //ui->m_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_player_mod)) + QKeySequence(shortcuts->_player).toString());
    ui->c_p_l->setText(QString::fromStdString(shortcuts->setModPrefix(shortcuts->_config_mod)) + QKeySequence(shortcuts->_config).toString());



}

#include "ctitlewidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSignalMapper>

#pragma execution_character_set("utf-8")
CTitleWidget::CTitleWidget(QWidget *parent) : QWidget(parent)
{
    m_pVersion_title = new QLabel();
    m_pMin_button = new PushButton();
    m_pMax_button = new PushButton();
    m_pClose_button = new PushButton();

    m_pVersion_title->setStyleSheet("color:black;");
    //设置图片
    m_pMin_button->loadPixmap("./Config/Res/img/sysButton/Min_button");
    m_pMax_button->loadPixmap("./Config/Res/img/sysButton/Max_button");
    m_pClose_button->loadPixmap("./Config/Res/img/sysButton/Close_button");

    connect(m_pMin_button, SIGNAL(clicked()), this, SIGNAL(showMin()));
    connect(m_pMax_button, SIGNAL(clicked()), this, SIGNAL(showMax()));
    connect(m_pClose_button, SIGNAL(clicked()), this, SIGNAL(closeWidget()));

    QHBoxLayout *title_layout = new QHBoxLayout();
    title_layout->addWidget(m_pVersion_title,0,Qt::AlignVCenter);
    title_layout->addStretch();

    title_layout->addWidget(m_pMin_button, 0, Qt::AlignTop);
    title_layout->addWidget(m_pMax_button, 0, Qt::AlignTop);
    title_layout->addWidget(m_pClose_button, 0, Qt::AlignTop);
    title_layout->setSpacing(0);
    title_layout->setContentsMargins(0, 0, 5, 0);
    m_pVersion_title->setContentsMargins(15, 0, 0, 0);

    QStringList string_list;
    string_list<<"./Config/Res/img/toolWidget/xiTong";

    QHBoxLayout *button_layout = new QHBoxLayout();

    QSignalMapper *signal_mapper = new QSignalMapper(this);
    for(int i=0; i<string_list.size(); i++)
    {
        ToolButton *tool_button = new ToolButton(string_list.at(i));
        tool_button->setStyleSheet("color:black");
        m_button_list.append(tool_button);
        connect(tool_button, SIGNAL(clicked()), signal_mapper, SLOT(map()));
        signal_mapper->setMapping(tool_button, QString::number(i, 10));

        button_layout->addWidget(tool_button, 0, Qt::AlignBottom);
    }
    connect(signal_mapper, SIGNAL(mapped(QString)), this, SLOT(turnPage(QString)));

    QLabel *logo_label = new QLabel();
    QPixmap pixmap("./Config/Res/logo");
    logo_label->setPixmap(pixmap);
    logo_label->setFixedSize(pixmap.size());
    logo_label->setCursor(Qt::PointingHandCursor);

    button_layout->addStretch();
    //button_layout->addWidget(logo_label);
    button_layout->setSpacing(8);
    button_layout->setContentsMargins(15, 0, 0, 0);

    QVBoxLayout *main_layout = new QVBoxLayout();
    main_layout->addLayout(title_layout);
    main_layout->addLayout(button_layout);
    main_layout->setSpacing(0);
    main_layout->setContentsMargins(0, 0, 0, 0);

    this->translateLanguage();

    setLayout(main_layout);
    setFixedHeight(100);
    turnPage(0);
    m_bIs_move = false;

}
void CTitleWidget::translateLanguage()
{
    m_pVersion_title->setText("语音AI助手");
    m_pMin_button->setToolTip(tr("最小化"));
    m_pMax_button->setToolTip(tr("最大化"));
    m_pClose_button->setToolTip(tr("关闭"));

    m_button_list.at(0)->setText("语音合成");
}

void CTitleWidget::paintEvent(QPaintEvent *)
{
    QString strSkin_name("./Config/Res/img/skin/18_big");
    QPainter painter(this);
    painter.drawPixmap(rect(), QPixmap(strSkin_name));

    QPainter painter2(this);
    painter2.setPen(Qt::gray);
    static const QPointF points[4] = {QPointF(0, 100), QPointF(0, this->height()-1), QPointF(this->width()-1, this->height()-1), QPointF(this->width()-1, 100)};
    painter2.drawPolyline(points, 4);
}
void CTitleWidget::turnPage(QString current_page)
{
    bool ok;
    int current_index = current_page.toInt(&ok, 10);

    for(int i=0; i<m_button_list.count(); i++)
    {
        ToolButton *tool_button = m_button_list.at(i);
        if(current_index == i)
        {
            tool_button->setMousePress(true);
            emit CurSelectPage(current_index);
        }
        else
        {
            tool_button->setMousePress(false);
        }
    }
}

void CTitleWidget::mousePressEvent(QMouseEvent *e)
{
    press_point = e->pos();
    m_bIs_move = true;
}

void CTitleWidget::mouseMoveEvent(QMouseEvent *e)
{
    if((e->buttons() == Qt::LeftButton) && m_bIs_move)
    {
        static QWidget* parent_widget = this->parentWidget();
        QPoint parent_point = parent_widget->pos();
        parent_point.setX(parent_point.x() + e->x() - press_point.x());
        parent_point.setY(parent_point.y() + e->y() - press_point.y());
        parent_widget->move(parent_point);
    }
}

void CTitleWidget::mouseReleaseEvent(QMouseEvent *)
{
    if(m_bIs_move)
    {
        m_bIs_move = false;
    }
}

void CTitleWidget::mouseDoubleClickEvent(QMouseEvent *)
{
    emit showMax();
}

#include "widget.h"
#include "ui_widget.h"
#include "tcpserver.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

//关闭服务
void Widget::on_pushButton_2_clicked()
{
    qApp->quit();
}

//开启服务
void Widget::on_pushButton_clicked()
{
    //协议端口号
    port = 8010;

    //实例tcpServer
    tcpServer = new TcpServer(this, port);
    QObject::connect(tcpServer, SIGNAL(updateServer(QString, int)),
                     this, SLOT(updateServer(QString, int)));

    //开启服务后按钮不可点击
    ui->pushButton->setEnabled(false);

}

//监听
void Widget::updateServer(QString message, int length)
{
    ui->listWidget->addItem(message.left(length));
}

Widget::~Widget()
{
    delete ui;
}

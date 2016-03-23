#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork>

#include "tcpserver.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    int port;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void updateServer(QString, int);


};

#endif // WIDGET_H

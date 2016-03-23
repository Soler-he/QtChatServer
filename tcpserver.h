#ifndef TCPSERVER
#define TCPSERVER

#include "tcpsocket.h"
#include <QtNetwork>

class TcpServer : public QTcpServer
{
    Q_OBJECT

public:
    explicit TcpServer(QObject *parent = 0, int port = 0);
    QList<TcpSocket*> tcpSocketList;

protected:
    void incomingConnection(int socketDescriptor);

signals:
    void updateServer(QString, int);

public slots:
    void updateClients(QString,int);
    void tcpDisconnected(int);
};


#endif // TCPSERVER


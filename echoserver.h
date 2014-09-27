#ifndef ECHOSERVER_H
#define ECHOSERVER_H

#include <QHostAddress>
#include <QObject>
#include <QSignalMapper>

class QTcpServer;

class EchoServer : public QObject
{
    Q_OBJECT
public:
    explicit EchoServer(QObject *parent = 0);

    bool listen(const QHostAddress &address, quint16 port);

private slots:
    void onNewConnection();
    void onReadyRead(QObject *socketObject);
    void onDisconnected(QObject *socketObject);

private:
    QTcpServer *m_server;
    QSignalMapper *m_readyReadSignalMapper;
    QSignalMapper *m_disconnectedSignalMapper;
};

#endif // ECHOSERVER_H

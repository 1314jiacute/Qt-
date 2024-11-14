#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     this->setWindowTitle("TCP - 客户端");
    ui->port->setText("8899");
     ui->ip->setText("127.0.0.1");
    m_tcp = new QTcpSocket;
    connect(m_tcp ,&QTcpSocket::readyRead,this,[=](){
        QByteArray recvMsg = m_tcp->readAll();
        ui->record->append("服务器说" + recvMsg);
    });
   connect(m_tcp,&QTcpSocket::connected,this,[=](){
         m_status->setPixmap(QPixmap(":/images/images/b2(4).png").scaled(20,20));
         ui->record->append("连接服务器成功");
    });

     connect(m_tcp ,&QTcpSocket::disconnected,this,[ = ](){
         ui->record->append("服务器已经断开了连接, ...");

         ui->connect->setEnabled(true);
         ui->disconnect->setEnabled(false);
         m_tcp->close();

     });

     m_status = new QLabel;
     m_status->setPixmap(QPixmap(":/images/images/b2(1).png").scaled(20,20));
     ui->statusbar->addWidget(new QLabel("连接状态"));
     ui->statusbar->addWidget(m_status);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connect_clicked()
{
    QString ip = ui->ip->text();
    unsigned short port = ui->port->text().toInt();//端口无符号整型
    m_tcp->connectToHost(QHostAddress(ip), port);
    ui->connect->setEnabled(false);
    ui->disconnect->setEnabled(true);
}


void MainWindow::on_disconnect_clicked()
{
    m_tcp->close();
    ui->connect->setEnabled(true);
    ui->disconnect->setEnabled(false);
}


void MainWindow::on_sendMsg_clicked()
{
    QString sendMsg = ui->msg->toPlainText();
    m_tcp->write(sendMsg.toUtf8());
    ui->record->append("客户端说 :" + sendMsg);
    ui->msg->clear();
}


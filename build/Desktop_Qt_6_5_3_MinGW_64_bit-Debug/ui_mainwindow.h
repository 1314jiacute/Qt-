/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelport;
    QLineEdit *port;
    QPushButton *connect;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *ip;
    QPushButton *disconnect;
    QGroupBox *groupBoxrecord;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *record;
    QGroupBox *groupBoxsend;
    QVBoxLayout *verticalLayout;
    QTextEdit *msg;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendMsg;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(384, 434);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        labelport = new QLabel(widget);
        labelport->setObjectName("labelport");

        horizontalLayout->addWidget(labelport);

        port = new QLineEdit(widget);
        port->setObjectName("port");

        horizontalLayout->addWidget(port);

        connect = new QPushButton(widget);
        connect->setObjectName("connect");

        horizontalLayout->addWidget(connect);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        ip = new QLineEdit(widget_2);
        ip->setObjectName("ip");

        horizontalLayout_2->addWidget(ip);

        disconnect = new QPushButton(widget_2);
        disconnect->setObjectName("disconnect");

        horizontalLayout_2->addWidget(disconnect);


        verticalLayout_3->addWidget(widget_2);

        groupBoxrecord = new QGroupBox(centralwidget);
        groupBoxrecord->setObjectName("groupBoxrecord");
        verticalLayout_2 = new QVBoxLayout(groupBoxrecord);
        verticalLayout_2->setObjectName("verticalLayout_2");
        record = new QTextEdit(groupBoxrecord);
        record->setObjectName("record");

        verticalLayout_2->addWidget(record);


        verticalLayout_3->addWidget(groupBoxrecord);

        groupBoxsend = new QGroupBox(centralwidget);
        groupBoxsend->setObjectName("groupBoxsend");
        verticalLayout = new QVBoxLayout(groupBoxsend);
        verticalLayout->setObjectName("verticalLayout");
        msg = new QTextEdit(groupBoxsend);
        msg->setObjectName("msg");

        verticalLayout->addWidget(msg);

        widget_3 = new QWidget(groupBoxsend);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(113, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendMsg = new QPushButton(widget_3);
        sendMsg->setObjectName("sendMsg");

        horizontalLayout_3->addWidget(sendMsg);

        horizontalSpacer_2 = new QSpacerItem(113, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);


        verticalLayout_3->addWidget(groupBoxsend);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 384, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelport->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200:", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "disconnect", nullptr));
        groupBoxrecord->setTitle(QCoreApplication::translate("MainWindow", "\351\200\232\350\257\235\350\256\260\345\275\225:", nullptr));
        groupBoxsend->setTitle(QCoreApplication::translate("MainWindow", "\346\266\210\346\201\257\345\217\221\351\200\201\357\274\232", nullptr));
        sendMsg->setText(QCoreApplication::translate("MainWindow", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

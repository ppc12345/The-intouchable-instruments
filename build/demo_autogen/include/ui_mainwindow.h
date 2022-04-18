/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QFrame *frame_1;
    QLabel *label;
    QLabel *label_video;
    QLabel *label_3;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1308, 867);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(-1, 32, 1201, 67));
        widget_2->setMaximumSize(QSize(16777215, 110));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(400, 110));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        frame_1 = new QFrame(centralwidget);
        frame_1->setObjectName(QStringLiteral("frame_1"));
        frame_1->setGeometry(QRect(-1, 113, 1301, 621));
        frame_1->setMaximumSize(QSize(16777215, 800));
        frame_1->setAutoFillBackground(false);
        frame_1->setStyleSheet(QStringLiteral("background-color:rgba(0, 229, 238,0.2)"));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 180, 291, 271));
        label->setMaximumSize(QSize(400, 400));
        label_video = new QLabel(frame_1);
        label_video->setObjectName(QStringLiteral("label_video"));
        label_video->setGeometry(QRect(299, -10, 701, 621));
        label_video->setMaximumSize(QSize(800, 800));
        label_video->setStyleSheet(QStringLiteral(""));
        label_video->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1010, 190, 291, 271));
        label_3->setMaximumSize(QSize(400, 400));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 745, 1201, 60));
        widget->setMaximumSize(QSize(16777215, 60));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 10, 121, 51));
        pushButton->setMaximumSize(QSize(200, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1010, 10, 121, 50));
        pushButton_2->setMaximumSize(QSize(16777215, 50));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral(""));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(9, 20, 16, 20));
        line->setMaximumSize(QSize(16777215, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 100, 1201, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 730, 1201, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1308, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Intouchable Instruments", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_video->setText(QApplication::translate("MainWindow", "video show", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnChange;
    QLabel *lblShow;
    QPushButton *pushButton;
    QLabel *lblThird;
    QLabel *lblSecond;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnChange = new QPushButton(centralWidget);
        btnChange->setObjectName(QStringLiteral("btnChange"));
        btnChange->setGeometry(QRect(70, 40, 80, 25));
        lblShow = new QLabel(centralWidget);
        lblShow->setObjectName(QStringLiteral("lblShow"));
        lblShow->setGeometry(QRect(80, 80, 231, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 40, 80, 25));
        lblThird = new QLabel(centralWidget);
        lblThird->setObjectName(QStringLiteral("lblThird"));
        lblThird->setGeometry(QRect(80, 110, 131, 17));
        lblSecond = new QLabel(centralWidget);
        lblSecond->setObjectName(QStringLiteral("lblSecond"));
        lblSecond->setGeometry(QRect(90, 120, 191, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnChange->setText(QApplication::translate("MainWindow", "Change", 0));
        lblShow->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Tekst</p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        lblThird->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lblSecond->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

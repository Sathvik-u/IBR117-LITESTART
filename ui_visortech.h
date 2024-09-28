/********************************************************************************
** Form generated from reading UI file 'visortech.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISORTECH_H
#define UI_VISORTECH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisorTech
{
public:
    QWidget *centralwidget;
    QWidget *widget;

    void setupUi(QMainWindow *VisorTech)
    {
        if (VisorTech->objectName().isEmpty())
            VisorTech->setObjectName(QStringLiteral("VisorTech"));
        VisorTech->resize(1024, 550);
        VisorTech->setMaximumSize(QSize(1024, 600));
        centralwidget = new QWidget(VisorTech);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 30, 761, 441));
        widget->setStyleSheet(QStringLiteral("image: url(:/new/images/visorlogo.png);"));
        VisorTech->setCentralWidget(centralwidget);

        retranslateUi(VisorTech);

        QMetaObject::connectSlotsByName(VisorTech);
    } // setupUi

    void retranslateUi(QMainWindow *VisorTech)
    {
        VisorTech->setWindowTitle(QApplication::translate("VisorTech", "VisorTech", 0));
    } // retranslateUi

};

namespace Ui {
    class VisorTech: public Ui_VisorTech {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISORTECH_H

/********************************************************************************
** Form generated from reading UI file 'NameTools.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMETOOLS_H
#define UI_NAMETOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NameToolsClass
{
public:
    QWidget *Widget;
    QLineEdit *headname;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *numstart_val;
    QLabel *label_3;
    QSpinBox *numlen;
    QToolButton *source_btn;
    QLabel *label_4;
    QLabel *label_5;
    QToolButton *des_btn;
    QListWidget *des_list;
    QListWidget *source_list;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *run_btn;

    void setupUi(QMainWindow *NameToolsClass)
    {
        if (NameToolsClass->objectName().isEmpty())
            NameToolsClass->setObjectName(QStringLiteral("NameToolsClass"));
        NameToolsClass->resize(666, 385);
        Widget = new QWidget(NameToolsClass);
        Widget->setObjectName(QStringLiteral("Widget"));
        headname = new QLineEdit(Widget);
        headname->setObjectName(QStringLiteral("headname"));
        headname->setGeometry(QRect(100, 50, 91, 20));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(31, 51, 60, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(31, 90, 36, 16));
        numstart_val = new QSpinBox(Widget);
        numstart_val->setObjectName(QStringLiteral("numstart_val"));
        numstart_val->setGeometry(QRect(100, 90, 91, 22));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(31, 129, 48, 16));
        numlen = new QSpinBox(Widget);
        numlen->setObjectName(QStringLiteral("numlen"));
        numlen->setGeometry(QRect(100, 130, 91, 22));
        source_btn = new QToolButton(Widget);
        source_btn->setObjectName(QStringLiteral("source_btn"));
        source_btn->setGeometry(QRect(100, 170, 61, 18));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(31, 168, 36, 16));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(31, 207, 48, 16));
        des_btn = new QToolButton(Widget);
        des_btn->setObjectName(QStringLiteral("des_btn"));
        des_btn->setGeometry(QRect(100, 210, 61, 18));
        des_list = new QListWidget(Widget);
        des_list->setObjectName(QStringLiteral("des_list"));
        des_list->setGeometry(QRect(460, 50, 191, 311));
        source_list = new QListWidget(Widget);
        source_list->setObjectName(QStringLiteral("source_list"));
        source_list->setGeometry(QRect(250, 50, 191, 311));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 20, 54, 12));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 20, 54, 12));
        run_btn = new QPushButton(Widget);
        run_btn->setObjectName(QStringLiteral("run_btn"));
        run_btn->setGeometry(QRect(30, 270, 75, 23));
        NameToolsClass->setCentralWidget(Widget);

        retranslateUi(NameToolsClass);

        QMetaObject::connectSlotsByName(NameToolsClass);
    } // setupUi

    void retranslateUi(QMainWindow *NameToolsClass)
    {
        NameToolsClass->setWindowTitle(QApplication::translate("NameToolsClass", "NameTools", Q_NULLPTR));
        label->setText(QApplication::translate("NameToolsClass", "\346\226\207\344\273\266\345\211\215\347\274\200\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("NameToolsClass", "\345\274\200\345\247\213\344\272\216", Q_NULLPTR));
        label_3->setText(QApplication::translate("NameToolsClass", "\347\274\226\345\217\267\351\225\277\345\272\246", Q_NULLPTR));
        source_btn->setText(QApplication::translate("NameToolsClass", "...", Q_NULLPTR));
        label_4->setText(QApplication::translate("NameToolsClass", "\346\272\220\347\233\256\345\275\225", Q_NULLPTR));
        label_5->setText(QApplication::translate("NameToolsClass", "\347\233\256\346\240\207\347\233\256\345\275\225", Q_NULLPTR));
        des_btn->setText(QApplication::translate("NameToolsClass", "...", Q_NULLPTR));
        label_6->setText(QApplication::translate("NameToolsClass", "\345\216\237\345\220\215\347\247\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("NameToolsClass", "\346\226\260\345\220\215\347\247\260", Q_NULLPTR));
        run_btn->setText(QApplication::translate("NameToolsClass", "\345\274\200\345\247\213\345\221\275\345\220\215", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NameToolsClass: public Ui_NameToolsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMETOOLS_H

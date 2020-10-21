/********************************************************************************
** Form generated from reading UI file 'regexpresion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXPRESION_H
#define UI_REGEXPRESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regExpresion
{
public:
    QGraphicsView *automataImage;
    QWidget *widget;
    QHBoxLayout *commandLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *regex;
    QLineEdit *regexContent;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushRegexTable;
    QSpacerItem *horizontalSpacer_6;
    QLabel *respuesta;
    QLabel *transTable;
    QTableWidget *transTableContent;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushBack;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *regExpresion)
    {
        if (regExpresion->objectName().isEmpty())
            regExpresion->setObjectName(QString::fromUtf8("regExpresion"));
        regExpresion->resize(1000, 450);
        automataImage = new QGraphicsView(regExpresion);
        automataImage->setObjectName(QString::fromUtf8("automataImage"));
        automataImage->setGeometry(QRect(460, 20, 511, 391));
        widget = new QWidget(regExpresion);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 20, 367, 391));
        commandLayout = new QHBoxLayout(widget);
        commandLayout->setObjectName(QString::fromUtf8("commandLayout"));
        commandLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        regex = new QLabel(widget);
        regex->setObjectName(QString::fromUtf8("regex"));

        verticalLayout->addWidget(regex);

        regexContent = new QLineEdit(widget);
        regexContent->setObjectName(QString::fromUtf8("regexContent"));

        verticalLayout->addWidget(regexContent);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushRegexTable = new QPushButton(widget);
        pushRegexTable->setObjectName(QString::fromUtf8("pushRegexTable"));

        horizontalLayout_3->addWidget(pushRegexTable);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        respuesta = new QLabel(widget);
        respuesta->setObjectName(QString::fromUtf8("respuesta"));
        respuesta->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(respuesta);

        transTable = new QLabel(widget);
        transTable->setObjectName(QString::fromUtf8("transTable"));

        verticalLayout->addWidget(transTable);

        transTableContent = new QTableWidget(widget);
        transTableContent->setObjectName(QString::fromUtf8("transTableContent"));

        verticalLayout->addWidget(transTableContent);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushBack = new QPushButton(widget);
        pushBack->setObjectName(QString::fromUtf8("pushBack"));

        horizontalLayout_6->addWidget(pushBack);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        commandLayout->addLayout(verticalLayout_2);


        retranslateUi(regExpresion);

        QMetaObject::connectSlotsByName(regExpresion);
    } // setupUi

    void retranslateUi(QDialog *regExpresion)
    {
        regExpresion->setWindowTitle(QApplication::translate("regExpresion", "Dialog", nullptr));
        regex->setText(QApplication::translate("regExpresion", "Ingrese su expresion Regular:", nullptr));
        pushRegexTable->setText(QApplication::translate("regExpresion", "Convertir", nullptr));
        respuesta->setText(QString());
        transTable->setText(QApplication::translate("regExpresion", "Tabla de transiciones", nullptr));
        pushBack->setText(QApplication::translate("regExpresion", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regExpresion: public Ui_regExpresion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXPRESION_H

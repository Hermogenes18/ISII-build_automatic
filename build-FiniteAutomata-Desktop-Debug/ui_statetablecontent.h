/********************************************************************************
** Form generated from reading UI file 'statetablecontent.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATETABLECONTENT_H
#define UI_STATETABLECONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

class Ui_stateTableContent
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *commandLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *regex;
    QLineEdit *regexContent;
    QHBoxLayout *horizontalLayout_3;
    QLabel *transTable;
    QTableWidget *transTableContent;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushDraw;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushBack;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *spacer1;
    QWidget *imageLayout;
    QHBoxLayout *horizontalSpacer_7;
    QWidget *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *image;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *stateTableContent)
    {
        if (stateTableContent->objectName().isEmpty())
            stateTableContent->setObjectName(QString::fromUtf8("stateTableContent"));
        stateTableContent->resize(800, 400);
        layoutWidget = new QWidget(stateTableContent);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 741, 361));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        commandLayout = new QHBoxLayout();
        commandLayout->setObjectName(QString::fromUtf8("commandLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        regex = new QLabel(layoutWidget);
        regex->setObjectName(QString::fromUtf8("regex"));

        verticalLayout->addWidget(regex);

        regexContent = new QLineEdit(layoutWidget);
        regexContent->setObjectName(QString::fromUtf8("regexContent"));

        verticalLayout->addWidget(regexContent);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);

        transTable = new QLabel(layoutWidget);
        transTable->setObjectName(QString::fromUtf8("transTable"));

        verticalLayout->addWidget(transTable);

        transTableContent = new QTableWidget(layoutWidget);
        transTableContent->setObjectName(QString::fromUtf8("transTableContent"));

        verticalLayout->addWidget(transTableContent);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushDraw = new QPushButton(layoutWidget);
        pushDraw->setObjectName(QString::fromUtf8("pushDraw"));

        horizontalLayout_6->addWidget(pushDraw);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushBack = new QPushButton(layoutWidget);
        pushBack->setObjectName(QString::fromUtf8("pushBack"));

        horizontalLayout_6->addWidget(pushBack);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);


        commandLayout->addLayout(verticalLayout_2);

        spacer1 = new QLabel(layoutWidget);
        spacer1->setObjectName(QString::fromUtf8("spacer1"));

        commandLayout->addWidget(spacer1);


        horizontalLayout_5->addLayout(commandLayout);

        imageLayout = new QWidget(layoutWidget);
        imageLayout->setObjectName(QString::fromUtf8("imageLayout"));
        horizontalSpacer_7 = new QHBoxLayout(imageLayout);
        horizontalSpacer_7->setObjectName(QString::fromUtf8("horizontalSpacer_7"));
        horizontalLayout_4 = new QWidget(imageLayout);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout(horizontalLayout_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        image = new QLabel(horizontalLayout_4);
        image->setObjectName(QString::fromUtf8("image"));

        horizontalLayout_2->addWidget(image);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalSpacer_7->addWidget(horizontalLayout_4);


        horizontalLayout_5->addWidget(imageLayout);


        retranslateUi(stateTableContent);

        QMetaObject::connectSlotsByName(stateTableContent);
    } // setupUi

    void retranslateUi(QDialog *stateTableContent)
    {
        stateTableContent->setWindowTitle(QApplication::translate("stateTableContent", "Dialog", nullptr));
        regex->setText(QApplication::translate("stateTableContent", "Expresion Regular", nullptr));
        transTable->setText(QApplication::translate("stateTableContent", "Tabla de transiciones", nullptr));
        pushDraw->setText(QApplication::translate("stateTableContent", "Dibujar", nullptr));
        pushBack->setText(QApplication::translate("stateTableContent", "Volver", nullptr));
        spacer1->setText(QString());
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stateTableContent: public Ui_stateTableContent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATETABLECONTENT_H

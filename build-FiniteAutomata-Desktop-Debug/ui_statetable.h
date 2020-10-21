/********************************************************************************
** Form generated from reading UI file 'statetable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATETABLE_H
#define UI_STATETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StateTable
{
public:
    QLabel *indication1;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *state;
    QLineEdit *stateContent;
    QLabel *alfabeth;
    QLineEdit *alfabethContent;
    QLabel *inicialState;
    QLineEdit *iStateContent;
    QLabel *finalState;
    QLineEdit *fStateContent;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushConvert;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushBack;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *StateTable)
    {
        if (StateTable->objectName().isEmpty())
            StateTable->setObjectName(QString::fromUtf8("StateTable"));
        StateTable->resize(400, 347);
        indication1 = new QLabel(StateTable);
        indication1->setObjectName(QString::fromUtf8("indication1"));
        indication1->setGeometry(QRect(30, 20, 341, 18));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        indication1->setFont(font);
        layoutWidget = new QWidget(StateTable);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 60, 301, 254));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        state = new QLabel(layoutWidget);
        state->setObjectName(QString::fromUtf8("state"));

        verticalLayout->addWidget(state);

        stateContent = new QLineEdit(layoutWidget);
        stateContent->setObjectName(QString::fromUtf8("stateContent"));

        verticalLayout->addWidget(stateContent);

        alfabeth = new QLabel(layoutWidget);
        alfabeth->setObjectName(QString::fromUtf8("alfabeth"));

        verticalLayout->addWidget(alfabeth);

        alfabethContent = new QLineEdit(layoutWidget);
        alfabethContent->setObjectName(QString::fromUtf8("alfabethContent"));

        verticalLayout->addWidget(alfabethContent);

        inicialState = new QLabel(layoutWidget);
        inicialState->setObjectName(QString::fromUtf8("inicialState"));

        verticalLayout->addWidget(inicialState);

        iStateContent = new QLineEdit(layoutWidget);
        iStateContent->setObjectName(QString::fromUtf8("iStateContent"));

        verticalLayout->addWidget(iStateContent);

        finalState = new QLabel(layoutWidget);
        finalState->setObjectName(QString::fromUtf8("finalState"));

        verticalLayout->addWidget(finalState);

        fStateContent = new QLineEdit(layoutWidget);
        fStateContent->setObjectName(QString::fromUtf8("fStateContent"));

        verticalLayout->addWidget(fStateContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushConvert = new QPushButton(layoutWidget);
        pushConvert->setObjectName(QString::fromUtf8("pushConvert"));

        horizontalLayout->addWidget(pushConvert);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushBack = new QPushButton(layoutWidget);
        pushBack->setObjectName(QString::fromUtf8("pushBack"));

        horizontalLayout->addWidget(pushBack);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StateTable);

        QMetaObject::connectSlotsByName(StateTable);
    } // setupUi

    void retranslateUi(QDialog *StateTable)
    {
        StateTable->setWindowTitle(QApplication::translate("StateTable", "Dialog", nullptr));
        indication1->setText(QApplication::translate("StateTable", "Ingrese los datos separados por una (,):", nullptr));
        state->setText(QApplication::translate("StateTable", "Ingrese los estados:", nullptr));
        alfabeth->setText(QApplication::translate("StateTable", "Ingrese el alfabeto:", nullptr));
        inicialState->setText(QApplication::translate("StateTable", "Ingrese el estado inicial:", nullptr));
        finalState->setText(QApplication::translate("StateTable", "Ingrese el/los estados finales:", nullptr));
        pushConvert->setText(QApplication::translate("StateTable", "Generar", nullptr));
        pushBack->setText(QApplication::translate("StateTable", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StateTable: public Ui_StateTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATETABLE_H

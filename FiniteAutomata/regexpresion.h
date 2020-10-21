#ifndef REGEXPRESION_H
#define REGEXPRESION_H

#include <QDialog>
#include <QGraphicsScene>
#include "automata.h"
#include "utilities2convert.h"
#include "tools.h"

namespace Ui {
class regExpresion;
}

class regExpresion : public QDialog
{
    Q_OBJECT

public:
    explicit regExpresion(QWidget *parent = nullptr);
    ~regExpresion();

signals:
    void back();

private slots:
    void on_pushBack_clicked();
    void on_pushRegexTable_clicked();

private:
    Ui::regExpresion *ui;
    QGraphicsScene *scene;
    Automata *autom;
};

#endif // REGEXPRESION_H

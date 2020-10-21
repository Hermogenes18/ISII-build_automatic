#ifndef STATETABLE_H
#define STATETABLE_H

#include <QDialog>
#include "statetablecontent.h"
#include "automata.h"
#include "tools.h"


extern Automata *automata;

namespace Ui {
class StateTable;
}

class StateTable : public QDialog
{
    Q_OBJECT

public:
    explicit StateTable(QWidget *parent = nullptr);
    ~StateTable();

signals:
    void back();

private slots:
    void hideWindow();
    void on_pushBack_clicked();
    void on_pushConvert_clicked();

private:
    Ui::StateTable *ui;
    stateTableContent *stateTableContentWindow;
};

#endif // STATETABLE_H

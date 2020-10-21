#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "regexpresion.h"
#include "statetable.h"
#include "statetablecontent.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void hideWindow();
    void on_pushStateTable_clicked();
    void on_pushRegExpresion_clicked();

private:
    Ui::MainMenu *ui;
    regExpresion *regExpresionWindow;
    StateTable *stateTableWindow;
};
#endif // MAINMENU_H

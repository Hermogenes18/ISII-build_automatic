#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    stateTableWindow = new StateTable( this );
    regExpresionWindow = new regExpresion( this );

    QObject::connect(stateTableWindow,SIGNAL(back()),this,SLOT(hideWindow()));
    QObject::connect(regExpresionWindow,SIGNAL(back()),this,SLOT(hideWindow()));
}

MainMenu::~MainMenu() {
    delete ui;
}

void MainMenu::on_pushStateTable_clicked() {
    this -> setVisible( false );
    stateTableWindow -> setVisible( true );
}

void MainMenu::on_pushRegExpresion_clicked() {
    this -> setVisible( false );
    regExpresionWindow -> setVisible( true );
}

void MainMenu::hideWindow() {
    this -> setVisible( true );
    regExpresionWindow -> setVisible( false );
    stateTableWindow -> setVisible( false );
}

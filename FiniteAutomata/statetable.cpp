#include "statetable.h"
#include "ui_statetable.h"

StateTable::StateTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StateTable)
{
    ui->setupUi(this);

}

StateTable::~StateTable()
{
    delete ui;
}

void StateTable::hideWindow() {
    this -> setVisible( true );
    stateTableContentWindow -> setVisible( false );
}

void StateTable::on_pushBack_clicked() {
    emit( back());
}

void StateTable::on_pushConvert_clicked() {
    QString state = ui -> stateContent -> text();
    QString alphabet = ui -> alfabethContent -> text();
    QString fState = ui -> fStateContent -> text();
    QString iS = ui -> iStateContent -> text();

    vector<QString> S = convertVector( state );
    vector<QString> A = convertVector( alphabet );
    vector<QString> fS = convertVector( fState );

    automata = new Automata();
    automata -> createAutomata( S, A, fS, iS );

    this -> setVisible( false );
    stateTableContentWindow = new stateTableContent( this );
    stateTableContentWindow -> setVisible( true );
    QObject::connect( stateTableContentWindow,SIGNAL( back()), this, SLOT( hideWindow()));
}

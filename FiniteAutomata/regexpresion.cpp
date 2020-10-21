#include "regexpresion.h"
#include "ui_regexpresion.h"

regExpresion::regExpresion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regExpresion)
{
    ui->setupUi(this);
    scene = new QGraphicsScene( this );
    ui -> automataImage -> setScene( scene );
    autom = new Automata();
}

regExpresion::~regExpresion()
{
    delete ui;
}

void regExpresion::on_pushBack_clicked() {
    ui->transTableContent->clear();
    ui->regexContent->clear();
    scene->clear();
    emit( back());
}

void regExpresion::on_pushRegexTable_clicked() {
    Automata A = getAutomata( ui->regexContent->text());
    Automata *autom = &A;
    automataToGraph( autom );
    QPixmap pix("outImagen.png");
    scene -> addPixmap( pix );

    QStringList titulo_v, titulo_h;
    auto state = A.getState();
    auto alphabet = A.getAlphabet();

    int tamS = state.size() & INT_MAX;
    ui->transTableContent -> setRowCount( tamS );

    int tamA = alphabet.size() & INT_MAX;
    ui -> transTableContent -> setColumnCount( tamA );

    for( size_t i = 0; i < state.size(); ++i )
        titulo_v.push_back( state[ i ]);

    for( size_t i = 0; i < alphabet.size(); ++i )
        titulo_h.push_back( alphabet[ i ]);

    ui -> transTableContent -> setHorizontalHeaderLabels( titulo_h );
    ui -> transTableContent -> setVerticalHeaderLabels( titulo_v );

    int nS = A.getNumberStates();
    vector<vector<QString>> T = A.getTransitions();
    int i = 0;
    int row = 0;
    while( i < nS ) {
        ui->transTableContent->insertRow( ui->transTableContent->rowCount());
        ui->transTableContent->setItem( row, 0, new QTableWidgetItem(T[row][0]));
        ui->transTableContent->setItem( row, 1, new QTableWidgetItem(T[row][1]));
        ++row;
        ++i;
    }
}

#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <vector>
#include <QString>
#include <QDebug>
#include <climits>

using namespace std;

class Automata {
    public:
        Automata();
        Automata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS );
        Automata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS, vector<vector<QString>> T );

        void createAutomata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS );
        void createFullAutomata( vector<QString> S, vector<QString> A, vector<QString> fS, QString iS, vector<vector<QString> > T );
        void generateTransition( vector<QString> T );
        void printAutomata();

        vector<QString> getState();
        vector<QString> getAlphabet();
        vector<QString> getFinals();
        QString getInitial();
        vector<vector<QString>> getTransitions();

        int getNumberStates();
        int getNumberAlphabet();
        int getNumberFinals();

    private:
        vector<QString> S; // States
        vector<QString> A; // Alphabet
        vector<QString> fS; // Final State
        QString iS; // Initial State
        vector<vector<QString>> T; // Transitions
};

#endif // AUTOMATA_H

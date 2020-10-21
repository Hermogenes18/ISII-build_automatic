#include "tools.h"
#include "automata.h"
#include <QFile>
#include <QTextStream>
#include <string>


std::vector<QString> convertVector( QString W ) {
    std::vector<QString> V;
    QString S;
    for( int i = 0; i < W.size(); ++i ) {
        if( W[ i ] == ' ' ) {
            V.push_back( S );
            S.clear();
        } else
            S.push_back( W[ i ]);
    }
    V.push_back( S );
    return V;
}
std::string fromQStringToString(const QString& qstring){
    std::string qstringConverted;
    return qstringConverted = qstring.toUtf8().constData();

}
void automataToGraph(Automata* automata){
    std::string txtOutput;
    std::string tempInit = fromQStringToString(automata->getInitial());
    vector<QString> states = automata->getState();
    vector<QString> alphabet = automata->getAlphabet();
    vector<QString> finalS = automata->getFinals();
    vector<vector<QString>> transitions = automata->getTransitions();

    txtOutput.append("Digraph automata_finito{\n");
    txtOutput.append("rankdir=LR\n");
    txtOutput.append("node[shape = point, color=white,fontcolor = white]; start;\n");
    for(int i = 0; i < automata->getNumberFinals(); ++i){
        txtOutput.append("node[shape = doublecircle, color=black, fontcolor=black]; ");
        std::string tempFinalS = fromQStringToString(finalS[i]);
        txtOutput.append(tempFinalS);
        txtOutput.append(";\n");
    }
    //nodo inicial
    txtOutput.append("node[shape = circle];\n");
    txtOutput.append("start -> ");
    txtOutput.append(tempInit);
    txtOutput.append("\n");

    //transiciones
    for(int i = 0; i < automata->getNumberStates(); ++i){
        std::string stateTemp = fromQStringToString(states[i]);
        for(int j = 0; j < automata->getNumberAlphabet(); ++j){
            std::string symbolTemp = fromQStringToString(alphabet[j]);
            std::string state2Temp = fromQStringToString(transitions[i][j]);

            txtOutput.append(stateTemp);
            txtOutput.append(" -> ");
            txtOutput.append(state2Temp);
            txtOutput.append(" [ label = \"");
            txtOutput.append(symbolTemp);
            txtOutput.append(" \" ];\n");
        }
    }
    txtOutput.append("}\n");

    QString finalTxt = QString::fromStdString(txtOutput);
    QFile file("outImagen.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out<<finalTxt;
    file.close();

    system("dot -Tpng outImagen.txt -o outImagen.png");
}

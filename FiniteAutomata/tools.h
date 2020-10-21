#ifndef TOOLS_H
#define TOOLS_H

#include <vector>
#include <QString>
class Automata;

std::vector<QString> convertVector( QString );
std::string fromQStringToString(const QString&);
void automataToGraph(Automata*);

#endif // TOOLS_H

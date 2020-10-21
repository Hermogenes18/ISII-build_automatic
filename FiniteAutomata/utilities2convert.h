#ifndef UTILITIES2CONVERT_H
#define UTILITIES2CONVERT_H

#include<bits/stdc++.h>
#include "automata.h"
using namespace std;

struct nst
{
    vector<int> a[2], e;
    bool f = 0;
};

struct dst
{
    int a[2] = {-1,-1};
    bool f=0;
};

struct nst;
struct dst;
void custom_clear();
string insert_concat(string regexp);
void character(int i);
void union_();
void concatenation();
void kleene_star();
void postfix_to_nfa(string postfix);
void display_nfa();
int priority(char c);
string regexp_to_postfix(string regexp);
void print_dfa();
void epsilon_closure(int state,set<int>&si);
set<int> state_change(int c,set<int>&si);
void nfa_to_dfa(set<int>&si,queue<set<int> >&que,int start_state);
pair<int,vector<tuple<int,int,bool> > > minimize_dfa(vector<dst> dfa);
void print_menu();
void print(vector<tuple<int,int,bool> > min_dfa);
void simulate(int start_st,vector<tuple<int,int,bool> >min_dfa);
Automata getAutomata( QString qs );

#endif // UTILITIES2CONVERT_H

#include <bits/stdc++.h>
using namespace std;
int N = 10000;
int point = 0;
string main_row;
struct action {
    string state;
    string expected_symbol;
    string new_symbol;
    string move;
    string next_state;
};
extern int check_ERROR(action* rules, int j);
extern void printstring();
extern void MOVE(action* rules, int j);
extern void RUN(action* rules, int end);
extern void input_main_row();
extern void input_rules(action* rules);

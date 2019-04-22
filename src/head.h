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

#include "head.h"
string do_s(vector<action>& rules, string main_row, int i, int point)
{
    string news = rules[i].new_symb;
    string ex = rules[i].exp_symbol;
    // cout << "[" << ex << "]";
    // cout << "[" << news << "]";
    // cout << "[" << point << "]"
    if (main_row[point] == ex[0]) {
        main_row[point] = news[0];
    }
    return main_row;
}

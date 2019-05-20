#include "turing-test-head.h"
int move(int point, vector<action>& rules, int i)
{
    if (rules[i].move == "r")
        point++;
    if (rules[i].move == "l")
        point--;
    if (rules[i].move == "n")
        point = point;
    return point;
}
string do_s(vector<action>& rules, string main_row, int i, int point)
{
    main_row[point] = rules[i].new_symb[0];
    return main_row;
}
void RUN(vector<action>& rules, string main_row)
{
    int point = 0;
    int i = 0;
    string current_state = rules[0].state;
    while (current_state != "halt") {
        if (current_state == rules[i].state
            && main_row[point] == rules[i].exp_symbol[0]) {
            main_row = do_s(rules, main_row, i, point);
            point = move(point, rules, i);
            current_state = rules[i].next_state;
            i = 0;
        } else {
            i++;
        }
    }
}

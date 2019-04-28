#include "head.h"
extern int check_error(vector<action>& rules, int i);
extern void RUN(vector<action>& rules, int end, string main_row);
extern void check_rules(vector<action>& rules, int i);
void input_rules(vector<action>& rules, string main_row)
{
    int fl, i;
    for (i = 0; i < rules.size(); i++) {
        cin >> rules[i].state;
        cin >> rules[i].exp_symbol;
        cin >> rules[i].new_symb;
        cin >> rules[i].move;
        cin >> rules[i].next_state;
        fl = check_error(rules, i);
        if (!fl)
            break;
        if (rules[i].next_state == "##")
            break;
        check_rules(rules, i);
    }
    RUN(rules, i, main_row);
}

#include "head.h"
extern int check_error(vector<action>& rules, int i);
extern void RUN(vector<action>& rules, string main_row);
void input_rules(vector<action>& rules, string main_row)
{
    int fl;
    for (i = 0; 1; i++)
        rules.push_back(element);
        cin >> rules[i].state;
        cin >> rules[i].exp_symbol;
        cin >> rules[i].new_symb;
        cin >> rules[i].move;
        cin >> rules[i].next_state;
        fl = check_error(rules, i);
        if (!fl){
            cout << "ERROR";
            break;
        }
        if (rules[i].next_state == "##")
            break;
    }
    RUN(rules, main_row);
}

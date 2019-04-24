#include "head.h"
extern int check_ERROR(action* rules, int j);
extern void RUN(action* rules, int end);
void input_rules(action* rules)
{
    cout << "Введите правила!" << endl;
    int fl, i;
    for (i = 0; i < N; i++) {
        cin >> rules[i].state;
        cin >> rules[i].expected_symbol;
        cin >> rules[i].new_symbol;
        cin >> rules[i].move;
        cin >> rules[i].next_state;
        fl = check_ERROR(rules, i);
        if (!fl)
            break;
        if (rules[i].next_state == "##")
            break;
    }
    RUN(rules, i);
}


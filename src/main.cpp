#include "head.h"
extern void input_main_row();
extern void input_rules(action* rules);
int main()
{
    setlocale(LC_ALL, "russian");
    action* rules;
    rules = new action[N];
    input_main_row();
    input_rules(rules);
    delete[] rules;
    return 0;
}

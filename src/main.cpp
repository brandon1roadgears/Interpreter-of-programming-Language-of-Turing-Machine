#include "head.h"
extern string input_main_row(string main_row);
extern void input_rules(vector<action>& rules, string main_row);
extern void hello_user();
int main()
{
    string main_row;
    vector<action> rules;
    hello_user();
    main_row = input_main_row(main_row);
    input_rules(rules, main_row);
    return 0;
}

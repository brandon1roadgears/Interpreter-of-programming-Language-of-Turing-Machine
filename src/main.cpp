#include "head.h"
extern void hello_user();
extern string input_main_row(string main_row);
extern void input_rules(vector<action>& rules, string main_row);
int main()
{
    hello_user();
    string main_row;
    vector<action> rules;
    main_row = input_main_row(main_row);
    input_rules(rules, main_row);
    return 0;
}

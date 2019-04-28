#include "head.h"
int check_error(vector<action>& rules, int i)
{
    if (rules[0].state != "00") {
        cout << "Name of first state must be 00!!!" << endl;
    }
    if (rules[i].state.length() > 2) {
        cout << "Error in line = " << i + 1 << " in state!!!" << endl;
        return 0;
    }
    if (rules[i].exp_symbol.length() > 1) {
        cout << "Error in line = " << i + 1 << " in expected_symbol!!!" << endl;
        return 0;
    }
    if (rules[i].new_symb.length() > 1) {
        cout << "Error in line = " << i + 1 << "in new symbol!!!" << endl;
        return 0;
    }
    if (rules[i].move.length() > 1) {
        cout << "Error in line = " << i + 1 << " in move!!!" << endl;
        return 0;
    }
    if (rules[i].next_state.length() > 2) {
        cout << "Error in line = " << i + 1 << " in next state!!!" << endl;
        return 0;
    }
    return 1;
}

#include "head.h"
bool check_error(vector<action>& rules)
{
    if (rules[0].state != "00") {
        cout << "Name of first state must be 00!!!" << endl;
        return false;
    }
    for (size_t i = 0; i < rules.size() - 1; i++) {
        if (rules[i].state.length() > 10) {
            cout << "Error in line = " << i + 1 << " in state!!! " << endl;
            return false;
        }
        if (rules[i].exp_symbol.length() > 1) {
            cout << "Error in line = " << i + 1 << " in expected_symbol!!! "
                 << endl;
            return false;
        }
        if (rules[i].new_symb.length() > 1) {
            cout << "Error in line = " << i + 1 << " in new symbol!!! " << endl;
            return false;
        }
        if (rules[i].move.length() > 1) {
            cout << "Error in line = " << i + 1 << " in move!!! " << endl;
            return false;
        }
        if (rules[i].next_state.length() > 10) {
            cout << "Error in line = " << i + 1 << " in next state!!!" << endl;
            return false;
        }
    }
    return true;
}

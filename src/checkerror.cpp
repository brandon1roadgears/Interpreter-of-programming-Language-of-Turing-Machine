#include "head.h"
int check_ERROR(action* rules, int j)
{
    if (rules[0].state != "00") {
        cout << "Error in line = " << 1 << " in state" << endl;
        cout << "Имя первого состояния должно быть нулевым!!!" << endl;
        return 0;
    }
    if (rules[j].state.length() > 2) {
        cout << "Error in line = " << j + 1 << " in state" << endl;
        return 0;
    }
    if (rules[j].expected_symbol.length() > 1) {
        cout << "Error in line = " << j + 1 << " in expected_symbol" << endl;
        return 0;
    }
    if (rules[j].new_symbol.length() > 1) {
        cout << "Error in line = " << j + 1 << " in new_symbol" << endl;
        return 0;
    }
    if (rules[j].move.length() > 1
        || (rules[j].move != "r" && rules[j].move != "l"
            && rules[j].move != "n")) {
        cout << "Error in line = " << j + 1 << " in move" << endl;
        return 0;
    }
    if (rules[j].next_state.length() > 2) {
        cout << "Error in line = " << j + 1 << " next_state" << endl;
        return 0;
    }
    return 1;
}

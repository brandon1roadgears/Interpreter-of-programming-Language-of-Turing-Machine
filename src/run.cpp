#include "head.h"
extern int setpoint(string main_row);
extern void pointer(int point, string row);
extern void print_string(string row);
extern int move(int point, vector<action>& rules, int i);
extern string do_s(vector<action>& rules, string main_row, int i, int point);
extern string border_check(string main_row, int point);
extern void fill_symbols(vector<char>& symbols, vector<action>& rules);
extern bool find_symbols(vector<char>& symbols, string main_row, int point);
void RUN(vector<action>& rules, string main_row)
{
    vector<char> symbols;
    fill_symbols(symbols, rules);
    int point = setpoint(main_row);
    string current_state = rules[0].state;
    for (int i = 0; current_state != "halt";) {
        if (current_state == rules[i].state
            && main_row[point] == rules[i].exp_symbol[0]) {
            main_row = do_s(rules, main_row, i, point);
            print_string(main_row);
            pointer(point, main_row);
            std::this_thread::sleep_for(std::chrono::milliseconds(15));
            system("clear");
            point = move(point, rules, i);
            main_row = border_check(main_row, point);
            current_state = rules[i].next_state;
            i = 0;
        } else if (
                current_state == rules[i].state
                && !find_symbols(symbols, main_row, point)) {
            cout << main_row << "\nNo much rules for '" << main_row[point]
                 << "' symbol" << i + 1;
            exit(0);
        } else {
            ++i;
        }
    }
    cout << main_row << endl;
    pointer(point, main_row);
}

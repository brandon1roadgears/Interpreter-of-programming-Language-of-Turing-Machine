#include "head.h"
extern void print_string(string row);
extern int move(int point, vector<action>& rules, int i);
extern string do_s(vector<action>& rules, string main_row, int i, int point);
void RUN(vector<action>& rules, int end, string main_row, int point)
{
    // string current_state = rules[0].next_state;
    for (int i = 0; i <= end; i++) {
        main_row = do_s(rules, main_row, i, point);
        print_string(main_row);
        point = move(point, rules, i);
    }
}

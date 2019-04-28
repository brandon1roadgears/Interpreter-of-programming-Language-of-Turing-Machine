#include "head.h"
extern void print_string(string row);
extern int move(int point, vector<action>& rules, int i);
void RUN(vector<action>& rules, int end, string main_row)
{
    int point = 0;
    string word1;
    string word2;
    for (int i = 0; i < end; i++) {
        word1 = rules[i].exp_symbol;
        word2 = rules[i].new_symb;
        if (word1[0] != main_row[point]) {
            cout << word1[0];
            cout << "NO symbols in rules";
            exit(1);
        } else {
            main_row[point] = word2[0];
        }
        point = move(point, rules, i);
        print_string(main_row);
    }
}

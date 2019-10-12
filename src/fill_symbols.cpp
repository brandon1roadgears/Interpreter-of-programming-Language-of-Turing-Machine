#include "head.h"
void fill_symbols(vector<char>& symbols, vector<action>& rules)
{
    for (size_t i = 0, j; i < rules.size(); ++i) {
        for (j = 0; j < symbols.size(); ++j) {
            if (rules[i].exp_symbol[0] == symbols[j]) {
                break;
            }
        }
        if (j == symbols.size())
            symbols.push_back(rules[i].exp_symbol[0]);
    }
}

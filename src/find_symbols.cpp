#include "head.h"
bool find_symbols(vector<char>& symbols, string main_row, int point)
{
    for (auto& i : symbols) {
        if (i == main_row[point]) {
            return true;
        }
    }
    return false;
}

#include "head.h"
string input_main_row(string main_row)
{
    ifstream str("string.txt");
    if (!str) {
        cout << "File dont found!" << endl
             << "Create string.txt in root of rep.!";
        return "EEERRROOORRR";
    }
    getline(str, main_row);
    cout << "Your initial string: " << main_row << '\n';
    cout << "Для продолжения нажмите 'q' + 'Enter'";
    char q;
    cin >> q;
    cout << '\n';
    return main_row;
}

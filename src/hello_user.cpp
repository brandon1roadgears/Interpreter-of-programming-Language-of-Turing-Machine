#include "head.h"
void hello_user()
{
    string s;
    setlocale(LC_ALL, "Russian");
    ifstream hello("hi.txt");
    while (getline(hello, s)) {
        cout << s << endl;
    }
}

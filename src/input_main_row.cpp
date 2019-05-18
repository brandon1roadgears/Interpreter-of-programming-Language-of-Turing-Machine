#include "head.h"
string input_main_row(string main_row)
{
		ifstream str("string.txt");
		getline(str,main_row);
		cout << "Your initial string: " << main_row << endl;
	return main_row;
}

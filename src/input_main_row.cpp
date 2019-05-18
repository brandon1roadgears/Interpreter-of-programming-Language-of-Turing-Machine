#include "head.h"
string input_main_row(string main_row)
{
	cout << "Input main Row" << endl;
		ifstream str("string.txt");
		getline(str,main_row);
	return main_row;
}

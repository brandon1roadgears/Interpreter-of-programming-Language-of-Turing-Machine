#include <bits/stdc++.h>
using namespace std;
int N = 10000;
string main_row;
struct action {
    string state;
    string expected_symbol;
    string new_symbol;
    string move;
    string next_state;
};
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
void input_rules(action* rules)
{
    cout << "Введите правила!" << endl;
    int fl;
    for (int i = 0; i < N; i++) {
        cin >> rules[i].state;
        cin >> rules[i].expected_symbol;
        cin >> rules[i].new_symbol;
        cin >> rules[i].move;
        cin >> rules[i].next_state;
        fl = check_ERROR(rules, i);
        if (!fl)
            break;
        if (rules[i].next_state == "##")
            break;
    }
}
void input_main_row()
{
    cout << "Введите строку для обработки!" << endl;
    cin >> main_row;
}
void printstring()
{
  cout << main_row << endl;
}

void get_exp_symbol(action* rules, int point)
{
  char exp[2];
  strcpy(exp, rules[point].expected_symbol);

}

void RUN(action *rules)
{
  int point = 0;
  for (int i = 0; i < N; i++){
    get_exp_symbol(rules, i);
  }
}
int main()
{
    setlocale(LC_ALL, "russian");
    action* rules;
    rules = new action[N];
    input_main_row();
    input_rules(rules);
    RUN(rules);
    delete[] rules;
    return 0;
}

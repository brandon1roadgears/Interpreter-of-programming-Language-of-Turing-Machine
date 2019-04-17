#include <bits/stdc++.h>
using namespace std;
int N = 10000;
struct action
{
  string state;
  string expected_symvol;
  string new_symbol;
  string move;
  string next_state;
};
void input_rules(action* rules)
{
  for (int i = 0; i < N; i++)
  {
    cin >> rules[i].state;
    cin >> rules[i].expected_symvol;
    cin >> rules[i].new_symbol;
    cin >> rules[i].move;
    cin >> rules[i].next_state;
    check_ERROR(rules,i);
  }
}
int main()
{
  setlocale(LC_ALL,"russian");
  action *rules;
  rules = new action [N];
  input_rules(rules);
  delete []rules;
  return 0;
}

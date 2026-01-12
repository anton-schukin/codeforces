#include <iostream>

using namespace std;

void perform_operation(string statement, int &x) {
  if (statement[0] == statement[1] && statement[0] == '+' ||
      statement[1] == statement[2] && statement[1] == '+') {
    x++;
  } else {
    x--;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int x = 0;

  while (n--) {
    string statement;

    cin >> statement;

    perform_operation(statement, x);
  }

  cout << x << endl;

  return 0;
}
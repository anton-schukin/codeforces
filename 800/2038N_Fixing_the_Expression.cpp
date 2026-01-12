#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string exp;
    cin >> exp;

    const int num1 = exp[0] - '0';
    const int num2 = exp[2] - '0';

    if (num1 < num2) {
      cout << num1 << '<' << num2 << endl;
    } else if (num1 > num2) {
      cout << num1 << '>' << num2 << endl;
    } else {
      cout << num1 << '=' << num2 << endl;
    }
  }

  return 0;
}
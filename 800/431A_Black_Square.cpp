#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;

  string s;
  cin >> s;

  long long calories = 0;

  for (const char c : s) {
    if (c == '1')
      calories += a1;
    else if (c == '2')
      calories += a2;
    else if (c == '3')
      calories += a3;
    else if (c == '4')
      calories += a4;
  }

  cout << calories << endl;

  return 0;
}
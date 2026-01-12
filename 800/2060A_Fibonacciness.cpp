#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    const int opt1 = a1 + a2;
    const int opt2 = a4 - a2;
    const int opt3 = a5 - a4;

    const int score1 =
        1 + (a2 + opt1 == a4 ? 1 : 0) + (opt1 + a4 == a5 ? 1 : 0);
    const int score2 =
        1 + (a1 + a2 == opt2 ? 1 : 0) + (opt2 + a4 == a5 ? 1 : 0);
    const int score3 =
        1 + (a1 + a2 == opt3 ? 1 : 0) + (a2 + opt3 == a4 ? 1 : 0);

    cout << max({score1, score2, score3}) << endl;
  }

  return 0;
}
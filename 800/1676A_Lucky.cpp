#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    const int sum_first_3 = s[0] + s[1] + s[2] - 3 * '0';
    const int sum_last_3 = s[3] + s[4] + s[5] - 3 * '0';

    if (sum_first_3 == sum_last_3) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
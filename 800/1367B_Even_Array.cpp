#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int count_even = 0, count_odd = 0, count_wrong = 0;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      if (num % 2 == 0) {
        count_even++;
        if (i % 2 != 0)
          count_wrong++;
      } else {
        count_odd++;
        if (i % 2 == 0)
          count_wrong++;
      }
    }

    if (count_even != n - n / 2 || count_odd != n / 2) {
      cout << -1 << endl;
    } else {
      cout << count_wrong / 2 << endl;
    }
  }

  return 0;
}
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

    if (n <= 2) {
      cout << n << endl;
      continue;
    }

    int num1 = 1;
    int operations = 1;

    while (num1 < n) {
      operations++;
      num1 = (num1 + 1) * 2;
    }

    cout << operations << endl;
  }

  return 0;
}
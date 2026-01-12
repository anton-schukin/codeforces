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

    if (n == 1 || n == 3) {
      cout << -1 << endl;
      continue;
    }

    if (n % 2 == 0) {
      for (int _ = 0; _ < n - 2; _++) {
        cout << '3';
      }
    } else {
      for (int _ = 0; _ < n - 4; _++) {
        cout << '3';
      }
      cout << "63";
    }
    cout << "66" << endl;
  }

  return 0;
}
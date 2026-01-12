#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = 0;

    // option 1: a1 & b1 => a2 & b2 OR a2 & b2 => a1 & b1
    if ((a1 > b1 && a2 > b2) || (a1 > b1 && a2 == b2) ||
        (a1 == b1 && a2 > b2)) {
      ans += 2;
    }

    // option 2: a1 & b2 => a2 & b1 OR a2 & b1 => a1 & b2
    if ((a1 > b2 && a2 > b1) || (a1 > b2 && a2 == b1) ||
        (a1 == b2 && a2 > b1)) {
      ans += 2;
    }

    cout << ans << endl;
  }

  return 0;
}
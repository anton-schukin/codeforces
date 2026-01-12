#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int x, y, n;
    cin >> x >> y >> n;

    const int n_mod = n % x;
    int k;

    if (n_mod >= y) {
      k = n - n_mod + y;
    } else {
      k = n - n_mod - x + y;
    }

    cout << k << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k, p;
    cin >> n >> k >> p;

    if (k > n * p || k < -n * p) {
      cout << -1 << endl;
    } else {
      cout << abs(k) / p + (k % p == 0 ? 0 : 1) << endl;
    }
  }

  return 0;
}
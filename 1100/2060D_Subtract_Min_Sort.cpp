#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    bool valid = true;
    for (int i = 0; valid && i < n - 1; i++) {
      if (a[i] > a[i + 1]) {
        valid = false;
      } else {
        const int min_val = min(a[i], a[i + 1]);
        a[i] -= min_val;
        a[i + 1] -= min_val;
      }
    }

    if (valid) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
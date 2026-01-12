#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, const int n) {
  int l = 0, h = n - 1;

  while (l < n - 1 && a[l] == a[l + 1]) {
    l++;
  }

  while (h > 0 && a[h] == a[h - 1]) {
    h--;
  }

  if (l == n - 1 && h == 0) {
    return 0;
  }

  if (a[0] != a[n - 1]) {
    return n - max(l + 1, n - h);
  }

  return h - l - 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }

  return 0;
}
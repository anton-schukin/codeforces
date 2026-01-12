#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, vector<int> &b, int n) {
  int ans = 0;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] > b[i + 1]) {
      ans += a[i] - b[i + 1];
    }
  }

  return ans + a[n - 1];
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

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    cout << solve(a, b, n) << endl;
  }

  return 0;
}
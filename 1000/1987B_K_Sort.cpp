#include <iostream>
#include <vector>

using namespace std;

long long solve(vector<long long> &a, const int n) {
  long long ans = 0;
  long long num_operations = 0;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      ans += a[i] - a[i + 1];
      num_operations = max(num_operations, a[i] - a[i + 1]);
      a[i + 1] = a[i];
    }
  }

  return ans == 0 ? ans : ans + num_operations;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }

  return 0;
}
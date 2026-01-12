#include <iostream>
#include <vector>

using namespace std;

long long solve(vector<int> &a, int n) {
  vector<int> counts(2 * n - 1, 0);

  for (int i = 0; i < n; ++i) {
    counts[a[i] - i + n - 2]++;
  }

  long long ans = 0;
  for (int i = 0; i < 2 * n - 2; ++i) {
    if (counts[i] > 0) {
      ans += static_cast<long long>(counts[i]) *
             static_cast<long long>(counts[i] - 1) / 2;
    }
  }

  return ans;
}

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
    for (int &num : a) {
      cin >> num;
    }

    cout << solve(a, n) << endl;
  }

  return 0;
}
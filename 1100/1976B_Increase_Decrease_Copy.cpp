#include <iostream>
#include <vector>

using namespace std;

long long solve(vector<int> &a, vector<int> &b, int n) {
  int last = b[n];
  int min_diff_last = INT_MAX;
  long long ans = 0;

  for (int i = 0; i < n; ++i) {
    int minimum = min(a[i], b[i]);
    int maximum = max(a[i], b[i]);
    ans += static_cast<long long>(maximum) - static_cast<long long>(minimum);

    if (last < minimum) {
      min_diff_last = min(min_diff_last, minimum - last);
    } else if (last > maximum) {
      min_diff_last = min(min_diff_last, last - maximum);
    } else {
      min_diff_last = 0;
    }
  }

  return ans + min_diff_last + 1;
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

    vector<int> b(n + 1);
    for (int &num : b) {
      cin >> num;
    }

    cout << solve(a, b, n) << endl;
  }

  return 0;
}
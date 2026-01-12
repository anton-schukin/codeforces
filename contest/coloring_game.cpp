#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, int n) {
  int ans = 0;

  for (int i = 0; i < n - 2; ++i) {
    for (int j = i + 1; j < n - 1; ++j) {
      for (int k = j + 1; k < n; ++k) {
        bool valid_triple = true;
        for (int l = 0; l < n; ++l) {
          if (l != i && l != j && l != k && (a[i] + a[j] + a[k]) <= a[l]) {
            valid_triple = false;
            break;
          } else if (l == i && a[j] + a[k] <= a[i]) {
            valid_triple = false;
            break;
          } else if (l == j && a[i] + a[k] <= a[j]) {
            valid_triple = false;
            break;
          } else if (l == k && a[i] + a[j] <= a[k]) {
            valid_triple = false;
            break;
          }
        }

        if (valid_triple) {
          ++ans;
        }
      }
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
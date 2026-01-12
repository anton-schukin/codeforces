#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, const int n) {
  int prev_nonzero_idx = -1;

  for (int i = 0; i < n; i++) {
    if (a[i] != 0 && prev_nonzero_idx >= 0 && prev_nonzero_idx != i - 1) {
      return 2;
    } else if (a[i] != 0) {
      prev_nonzero_idx = i;
    }
  }

  return 1;
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
    bool all_zeros = true;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      a[i] = num;

      if (num != 0 && all_zeros == true) {
        all_zeros = false;
      }
    }

    if (all_zeros) {
      cout << '0' << endl;
    } else {
      cout << solve(a, n) << endl;
    }
  }

  return 0;
}
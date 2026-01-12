#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, int n, int k) {
  if (k != 4) {
    int max_mod = -1;

    for (int i = 0; i < n; ++i) {
      if (a[i] % k == 0) {
        return 0;
      }

      if (a[i] % k > max_mod) {
        max_mod = a[i] % k;
      }
    }

    return k - max_mod;
  } else {
    int num_mod_2 = 0;
    bool is_one_away = false;

    for (int i = 0; i < n; ++i) {
      if (a[i] % 4 == 0) {
        return 0;
      }
      if ((a[i] + 1) % 4 == 0) {
        is_one_away = true;
      }
      if (a[i] % 2 == 0) {
        ++num_mod_2;
      }
      if (num_mod_2 == 2) {
        return 0;
      }
    }

    return min(is_one_away ? 1 : INT_MAX, 2 - num_mod_2);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &num : a) {
      cin >> num;
    }

    cout << solve(a, n, k) << endl;
  }

  return 0;
}
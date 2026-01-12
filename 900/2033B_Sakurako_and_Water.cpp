#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<int>> &M, int n) {
  int ans = 0;

  for (int i = 0; i < n; i++) {
    int row_low = n - i - 1, col_low = 0;
    int min_diag_low = INT_MAX;

    while (row_low < n) {
      min_diag_low = min(min_diag_low, M[row_low][col_low]);

      row_low++;
      col_low++;
    }

    int row_high = 0, col_high = n - i - 1;
    int min_diag_high = INT_MAX;

    while (i != n - 1 && col_high < n) {
      min_diag_high = min(min_diag_high, M[row_high][col_high]);

      row_high++;
      col_high++;
    }

    if (min_diag_low < 0) {
      ans += -1 * min_diag_low;
    }
    if (min_diag_high < 0) {
      ans += -1 * min_diag_high;
    }
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> M[i][j];
      }
    }

    cout << solve(M, n) << endl;
  }

  return 0;
}
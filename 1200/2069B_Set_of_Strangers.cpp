#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solve(vector<vector<int>> &colors, int n, int m) {
  unordered_map<int, bool> adjacent_colors_exist;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int color = colors[i][j];
      if (adjacent_colors_exist.find(color) == adjacent_colors_exist.end()) {
        adjacent_colors_exist[color] = false;
      }
      if (i > 0 && colors[i - 1][j] == color) {
        adjacent_colors_exist[color] = true;
      }
      if (j > 0 && colors[i][j - 1] == color) {
        adjacent_colors_exist[color] = true;
      }
    }
  }

  int ans = 0;
  bool any_adjacent_exist = false;

  for (auto &pair : adjacent_colors_exist) {
    if (pair.second) {
      if (!any_adjacent_exist) {
        any_adjacent_exist = true;
      }

      ans += 2;
    } else {
      ans += 1;
    }
  }

  return any_adjacent_exist ? ans - 2 : ans - 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> colors(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> colors[i][j];
      }
    }

    cout << solve(colors, n, m) << endl;
  }

  return 0;
}
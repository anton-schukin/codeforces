#include <iostream>

using namespace std;

const int GRID_ROWS = 10;
const int GRID_COLS = 10;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int ans = 0;

    for (int i = 0; i < GRID_ROWS; ++i) {
      for (int j = 0; j < GRID_COLS; ++j) {
        char c;
        cin >> c;

        int val_i = i, val_j = j;

        if (i >= 5) {
          val_i = 4 - (i % 5);
        }
        if (j >= 5) {
          val_j = 4 - (j % 5);
        }

        if (c == 'X') {
          ans += min(val_i, val_j) + 1;
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}
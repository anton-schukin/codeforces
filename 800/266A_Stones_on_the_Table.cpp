#include <iostream>

using namespace std;

int solve(const string &stone_colors, const int n) {
  int stones_to_remove = 0;

  for (int i = 0; i < n - 1; i++) {
    if (stone_colors[i] == stone_colors[i + 1]) {
      stones_to_remove++;
    }
  }

  return stones_to_remove;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  string stone_colors;

  cin >> stone_colors;

  cout << solve(stone_colors, n) << endl;

  return 0;
}
#include <iostream>
#include <unordered_set>

using namespace std;

int solve(const int a, const int b, const int c, const int d) {
  unordered_set<int> unique_colors;

  unique_colors.insert(a);
  unique_colors.insert(b);
  unique_colors.insert(c);
  unique_colors.insert(d);

  return 4 - static_cast<int>(unique_colors.size());
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int color1, color2, color3, color4;

  cin >> color1 >> color2 >> color3 >> color4;

  cout << solve(color1, color2, color3, color4) << endl;

  return 0;
}
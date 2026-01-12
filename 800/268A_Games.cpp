#include <iostream>
#include <unordered_map>
#include <vector>


using namespace std;

int solve(const vector<int> &guest_colors,
          unordered_map<int, int> &count_home_colors, const int n) {
  int num_switches = 0;

  for (int i = 0; i < n; i++) {
    if (count_home_colors.find(guest_colors[i]) != count_home_colors.end()) {
      num_switches += count_home_colors[guest_colors[i]];
    }
  }

  return num_switches;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> guest_colors(n);
  unordered_map<int, int> count_home_colors;

  for (int i = 0; i < n; i++) {
    int home_color;
    cin >> home_color;

    if (count_home_colors.find(home_color) != count_home_colors.end()) {
      count_home_colors[home_color]++;
    } else {
      count_home_colors[home_color] = 1;
    }

    cin >> guest_colors[i];
  }

  cout << solve(guest_colors, count_home_colors, n) << endl;

  return 0;
}
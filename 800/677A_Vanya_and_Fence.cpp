#include <iostream>
#include <vector>

using namespace std;

int solve(const vector<int> &heights, int n, int h) {
  int count_taller_than_h = 0;

  for (const int height : heights) {
    if (height > h) {
      count_taller_than_h++;
    }
  }

  return n + count_taller_than_h;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h;

  cin >> n >> h;

  vector<int> heights(n);

  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }

  cout << solve(heights, n, h) << endl;

  return 0;
}
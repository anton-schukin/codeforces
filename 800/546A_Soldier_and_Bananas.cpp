#include <iostream>

using namespace std;

int solve(const int k, const int n, const int w) {
  return max(k * (w * (w + 1) / 2) - n, 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n, w;

  cin >> k >> n >> w;

  cout << solve(k, n, w) << endl;

  return 0;
}
#include <iostream>

using namespace std;

int solve(const int x1, const int x2, const int x3) {
  return min(abs(x1 - x2) + abs(x1 - x3),
             min(abs(x2 - x1) + abs(x2 - x3), abs(x3 - x1) + abs(x3 - x2)));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  cout << solve(x1, x2, x3) << endl;

  return 0;
}
#include <iostream>

using namespace std;

int solve(int x) {
  int num_steps = 0;
  int i = 5;

  while (i > 0) {
    num_steps += x / i;
    x %= i;
    i--;
  }

  return num_steps;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;

  cin >> x;

  cout << solve(x) << endl;

  return 0;
}
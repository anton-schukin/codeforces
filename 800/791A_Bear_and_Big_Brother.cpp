#include <iostream>

using namespace std;

int solve(int a, int b) {
  int curr_years = 0;

  while (a <= b) {
    curr_years++;
    a *= 3;
    b *= 2;
  }

  return curr_years;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;

  cin >> a >> b;

  cout << solve(a, b) << endl;

  return 0;
}
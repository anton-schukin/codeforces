#include <iostream>

using namespace std;

int solve(int y) {
  int dig1, dig2, dig3, dig4;

  do {
    y++;
    dig1 = y % 10, dig2 = (y / 10) % 10, dig3 = (y / 100) % 10,
    dig4 = (y / 1000) % 10;
  } while (dig1 == dig2 || dig1 == dig3 || dig1 == dig4 || dig2 == dig3 ||
           dig2 == dig4 || dig3 == dig4);

  return y;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int y;

  cin >> y;

  cout << solve(y) << endl;

  return 0;
}
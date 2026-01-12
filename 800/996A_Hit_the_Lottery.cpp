#include <iostream>

using namespace std;

int solve(int n) {
  int ans = 0;

  if (n / 100 > 0) {
    ans += n / 100;
    n -= (n / 100) * 100;
  }
  if (n / 20 > 0) {
    ans += n / 20;
    n -= (n / 20) * 20;
  }
  if (n >= 10) {
    ans++;
    n -= 10;
  }
  if (n >= 5) {
    ans++;
    n -= 5;
  }
  if (n >= 1) {
    ans += n;
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  cout << solve(n) << endl;

  return 0;
}
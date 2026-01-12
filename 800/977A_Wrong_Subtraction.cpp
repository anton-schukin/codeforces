#include <iostream>

using namespace std;

void solve(int &n, int k) {
  while (k--) {
    if (n % 10 == 0) {
      n /= 10;
    } else {
      n -= 1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;

  cin >> n >> k;

  solve(n, k);

  cout << n << endl;

  return 0;
}
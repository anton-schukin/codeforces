#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    const int diff = abs(a - b);
    const int moves = diff / 10 + (diff % 10 != 0 ? 1 : 0);

    cout << moves << endl;
  }

  return 0;
}
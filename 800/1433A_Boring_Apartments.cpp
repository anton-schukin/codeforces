#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;

    const int dig = x % 10;
    const int num_same = x > 1000 ? 4 : x > 100 ? 3 : x > 10 ? 2 : 1;

    cout << 10 * (dig - 1) + (num_same * (num_same + 1)) / 2 << endl;
  }

  return 0;
}
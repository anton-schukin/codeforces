#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, l, m, n, d;

  cin >> k;
  cin >> l;
  cin >> m;
  cin >> n;
  cin >> d;

  int dragons_harmed = 0;

  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      dragons_harmed++;
    }
  }

  cout << dragons_harmed << endl;

  return 0;
}
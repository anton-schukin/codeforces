#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  cout << min((k * l) / nl, min(c * d, p / np)) / n << endl;

  return 0;
}
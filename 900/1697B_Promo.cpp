#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, q;
  cin >> n >> q;

  vector<int> prices(n);
  for (int &p : prices) {
    cin >> p;
  }

  sort(prices.begin(), prices.end());

  vector<long long> prefix(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    prefix[i + 1] = prefix[i] + prices[i];
  }

  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << prefix[n - x + y] - prefix[n - x] << '\n';
  }

  return 0;
}
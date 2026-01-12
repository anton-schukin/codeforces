#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &num : a) {
      cin >> num;
    }

    int min_val = *min_element(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < n; ++i) {
      ans += a[i] - min_val;
    }

    cout << ans << endl;
  }

  return 0;
}
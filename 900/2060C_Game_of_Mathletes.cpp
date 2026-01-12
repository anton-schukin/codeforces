#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> x(n);
    unordered_map<int, int> targets;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      x[i] = num;
      targets[k - num]++;
    }

    int ans = 0;
    for (int num : x) {
      if ((num == k - num && targets[num] > 1) ||
          (num != k - num && targets[num] > 0 && targets[k - num] > 0)) {
        targets[num]--;
        targets[k - num]--;
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
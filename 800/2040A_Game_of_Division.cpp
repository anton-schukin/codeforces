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

    vector<int> a(n);
    unordered_map<int, int> targets;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      a[i] = num;
      targets[num % k]++;
    }

    bool valid = true;
    int win_idx = -1;
    for (int i = 0; valid && i < n; i++) {
      if (targets[a[i] % k] < 2) {
        valid = false;
        win_idx = i + 1;
      }
    }

    if (win_idx != -1) {
      cout << "YES" << endl;
      cout << win_idx << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
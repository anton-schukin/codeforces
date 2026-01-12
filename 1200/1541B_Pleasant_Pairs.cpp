#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solve(vector<int> &a, int n) {
  vector<int> index(2 * n + 1, -1);

  for (int i = 0; i < n; ++i) {
    index[a[i]] = i + 1;
  }

  int ans = 0;

  for (int sum = 3; sum <= 2 * n - 1; ++sum) {
    for (int i = 1; i * i <= sum; ++i) {
      if (sum % i == 0 && i * i != sum && index[i] != -1 &&
          index[sum / i] != -1 && index[i] + index[sum / i] == sum) {
        ans++;
      }
    }
  }

  return ans;
}

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

    cout << solve(a, n) << endl;
  }

  return 0;
}
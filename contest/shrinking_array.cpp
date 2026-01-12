#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, int n) {
  if (n == 2 && abs(a[1] - a[0]) <= 1) {
    return 0;
  }
  if (n == 2) {
    return -1;
  }

  bool is_sorted_asc = true, is_sorted_desc = true;
  for (int i = 0; i < n - 1; ++i) {
    if (abs(a[i + 1] - a[i]) <= 1) {
      return 0;
    }
    if (is_sorted_desc && a[i + 1] > a[i]) {
      is_sorted_desc = false;
    }
    if (is_sorted_asc && a[i + 1] < a[i]) {
      is_sorted_asc = false;
    }
  }

  return (is_sorted_asc || is_sorted_desc) ? -1 : 1;
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
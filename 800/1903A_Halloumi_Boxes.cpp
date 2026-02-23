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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int prev = INT_MIN;
    bool is_sorted = true;
    for (int &num : arr) {
      cin >> num;
      if (is_sorted && num < prev) {
        is_sorted = false;
      }
      prev = num;
    }

    if (k == 1 && !is_sorted) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
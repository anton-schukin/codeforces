#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    bool valid = true;

    for (int i = 0; i < n - 1; i++) {
      if (nums[i + 1] - nums[i] > 1) {
        valid = false;
        break;
      }
    }

    if (valid) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
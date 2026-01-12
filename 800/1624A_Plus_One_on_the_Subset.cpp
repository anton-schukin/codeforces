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

    const auto maximum = max_element(nums.begin(), nums.end());
    const auto minimum = min_element(nums.begin(), nums.end());

    cout << *maximum - *minimum << endl;
  }

  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums(4);

  for (int i = 0; i < 4; i++) {
    cin >> nums[i];
  }

  const auto maximum = max_element(nums.begin(), nums.end());

  for (int i = 0; i < 4; i++) {
    if (*maximum - nums[i] != 0) {
      cout << *maximum - nums[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
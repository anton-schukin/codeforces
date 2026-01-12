#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  const auto max_elem = max_element(arr.begin(), arr.end());

  int res = 0;

  for (int i = 0; i < n; i++) {
    res += *max_elem - arr[i];
  }

  cout << res << endl;

  return 0;
}
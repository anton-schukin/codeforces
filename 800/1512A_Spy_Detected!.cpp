#include <iostream>
#include <vector>

using namespace std;

int solve(const vector<int> &arr, const int n) {
  int arr_num = -1, spy_idx = -1;

  for (int i = 0; i < n - 1; i++) {
    if (arr_num == -1 && arr[i] == arr[i + 1]) {
      arr_num = arr[i];
    } else if (arr_num != -1 && arr[i] != arr[i + 1]) {
      spy_idx = i + 1;
      break;
    } else if (arr[i] != arr[i + 1]) {
      if (arr[i] == arr[i + 2]) {
        spy_idx = i + 1;
        break;
      }
      if (arr[i + 1] == arr[i + 2]) {
        spy_idx = i;
        break;
      }
    }
  }

  return spy_idx + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    cout << solve(arr, n) << endl;
  }

  return 0;
}
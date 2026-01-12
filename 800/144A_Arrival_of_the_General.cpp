#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int max_idx = 0, max_value = INT_MIN, min_idx = 0, min_value = INT_MAX;

  for (int i = 0; i < n; i++) {
    int height;
    cin >> height;

    if (height > max_value) {
      max_idx = i;
      max_value = height;
    }
    if (height <= min_value) {
      min_idx = i;
      min_value = height;
    }
  }

  cout << (max_idx + n - min_idx - (min_idx < max_idx ? 2 : 1)) << endl;

  return 0;
}
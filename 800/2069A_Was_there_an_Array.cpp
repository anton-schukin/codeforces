#include <iostream>
#include <vector>

using namespace std;

void print_success() { cout << "YES" << endl; }
void print_failure() { cout << "NO" << endl; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> arr(n - 2);

    for (int i = 0; i < n - 2; i++) {
      cin >> arr[i];
    }

    if (n < 4) {
      print_success();
      continue;
    }

    bool is_valid = true;
    for (int i = 0; i < n - 4; i++) {
      if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1) {
        is_valid = false;
        break;
      }
    }

    if (is_valid) {
      print_success();
    } else {
      print_failure();
    }
  }
}
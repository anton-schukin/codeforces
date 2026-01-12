#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int first_one_idx = -1;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      if (num == 1) {
        first_one_idx = i;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
      }
    }

    if (first_one_idx == -1) {
      for (int i = 0; i <= n; i++) {
        cout << i + 1 << " ";
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (i == first_one_idx) {
          cout << n + 1 << " ";
        }
        cout << i + 1 << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
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

    if (((n / 2) % 2) != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;

      vector<int> evens;
      vector<int> odds;

      for (int i = 2; i <= n; i += 2) {
        evens.push_back(i);

        if (i == n) {
          odds.push_back(i + n / 2 - 1);
        } else {
          odds.push_back(i - 1);
        }
      }

      for (int i = 0; i < n / 2; i++) {
        cout << evens[i] << " ";
      }
      for (int i = 0; i < n / 2; i++) {
        cout << odds[i] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
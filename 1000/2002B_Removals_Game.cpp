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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    int l_a = 0, h_a = n - 1, l_b = 0, h_b = n - 1;
    bool valid = true;

    while (valid && l_a < h_a && l_b < h_b) {
      if ((a[l_a] != b[l_b] || a[h_a] != b[h_b]) &&
          (a[l_a] != b[h_b] || a[h_a] != b[l_b])) {
        valid = false;
      } else if (a[l_a] == b[l_b]) {
        l_a++;
        l_b++;
      } else if (a[h_a] == b[h_b]) {
        h_a--;
        h_b--;
      } else if (a[l_a] == b[h_b]) {
        l_a++;
        h_b--;
      } else if (a[h_a] == b[l_b]) {
        h_a--;
        l_b++;
      }
    }

    if (valid)
      cout << "Bob" << endl;
    else
      cout << "Alice" << endl;
  }

  return 0;
}
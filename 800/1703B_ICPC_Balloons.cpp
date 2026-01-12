#include <algorithm>
#include <iostream>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    bool seen[26];
    fill_n(seen, 26, false);

    int ans = n;

    cin.ignore();

    while (n--) {
      char c;
      cin.get(c);

      if (!seen[c - 'A']) {
        seen[c - 'A'] = true;
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
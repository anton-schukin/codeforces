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

    string s;
    cin >> s;

    if (n <= 2) {
      cout << 0 << endl;
      continue;
    }

    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
      if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
          (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
        ans++;
        i += 2;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
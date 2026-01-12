#include <iostream>

using namespace std;

const string codeforces = "codeforces";

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int diff_indices = 0;
    for (int i = 0; i < 10; i++) {
      if (s[i] != codeforces[i])
        diff_indices++;
    }

    cout << diff_indices << endl;
  }

  return 0;
}
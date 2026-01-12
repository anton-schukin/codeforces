#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    cout << s[0] + s[1] - 2 * '0' << endl;
  }

  return 0;
}
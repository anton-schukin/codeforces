#include <iostream>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    const unsigned int len = s.length();

    if (len % 2 != 0) {
      print_failure();
      continue;
    }

    bool valid = true;

    for (int i = 0; i < len / 2 && valid; i++) {
      if (s[i] != s[len / 2 + i]) {
        valid = false;
      }
    }

    if (valid)
      print_success();
    else
      print_failure();
  }

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    char curr_solving = '\n';
    vector<bool> touched(26, false);

    string s;
    cin >> s;

    bool valid = true;

    for (int i = 0; i < n && valid; i++) {
      if (curr_solving == s[i])
        continue;

      if (touched[s[i] - 'A']) {
        valid = false;
      }

      touched[s[i] - 'A'] = true;
      curr_solving = s[i];
    }

    if (valid)
      print_success();
    else
      print_failure();
  }

  return 0;
}
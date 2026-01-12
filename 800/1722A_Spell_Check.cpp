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
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n != 5) {
      print_failure();
      continue;
    }

    int count_T = 0, count_i = 0, count_m = 0, count_u = 0, count_r = 0;
    bool valid = true;

    for (int i = 0; i < 5 && valid; i++) {
      if (s[i] == 'T')
        count_T++;
      else if (s[i] == 'i')
        count_i++;
      else if (s[i] == 'm')
        count_m++;
      else if (s[i] == 'u')
        count_u++;
      else if (s[i] == 'r')
        count_r++;
      else
        valid = false;
    }

    if (count_T != 1 || count_i != 1 || count_m != 1 || count_u != 1 ||
        count_r != 1) {
      valid = false;
    }

    if (valid)
      print_success();
    else
      print_failure();
  }

  return 0;
}
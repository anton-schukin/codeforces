#include <iostream>

using namespace std;

void print_no() { cout << "NO" << endl; }

void print_yes() { cout << "YES" << endl; }

void solve(const string &s, const string &t) {
  const unsigned int len_s = s.length();
  const unsigned int len_t = t.length();

  if (len_s != len_t) {
    print_no();
    return;
  }

  for (int i = 0; i < len_s; i++) {
    if (s[i] != t[len_s - i - 1]) {
      print_no();
      return;
    }
  }

  print_yes();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;

  cin >> s >> t;

  solve(s, t);

  return 0;
}
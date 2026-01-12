#include <iostream>

using namespace std;

void solve(string &s) {
  int len = s.length();
  int count1 = 0, count2 = 0, count3 = 0;

  for (int i = 0; i < len; i += 2) {
    if (s[i] == '1')
      count1++;
    else if (s[i] == '2')
      count2++;
    else
      count3++;
  }

  int idx = 0;

  while (count1--) {
    s[idx] = '1';
    idx += 2;
  }
  while (count2--) {
    s[idx] = '2';
    idx += 2;
  }
  while (count3--) {
    s[idx] = '3';
    idx += 2;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;

  cin >> s;

  solve(s);

  cout << s << endl;

  return 0;
}
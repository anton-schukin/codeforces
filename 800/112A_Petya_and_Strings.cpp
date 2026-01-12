#include <cctype>
#include <iostream>

using namespace std;

char normalize_to_lowercase(char ch) {
  return isupper(ch) ? ch + ('a' - 'A') : ch;
}

int solve(string s1, string s2) {
  int len = s1.length();

  for (int i = 0; i < len; i++) {
    char ch1 = normalize_to_lowercase(s1[i]);
    char ch2 = normalize_to_lowercase(s2[i]);

    if (ch1 != ch2) {
      return ch1 > ch2 ? 1 : -1;
    }
  }

  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1, s2;

  cin >> s1 >> s2;

  int ans = solve(s1, s2);

  cout << ans << endl;

  return 0;
}
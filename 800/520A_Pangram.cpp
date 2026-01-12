#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

const int ALPHABET_SIZE = 26;

void solve(const string &s) {
  vector<bool> seen(26, false);
  int count_letters = 0;

  for (const char ch : s) {
    if (isupper(ch) && !seen[ch - 'A']) {
      seen[ch - 'A'] = true;
      count_letters++;
    } else if (islower(ch) && !seen[ch - 'a']) {
      seen[ch - 'a'] = true;
      count_letters++;
    }

    if (count_letters == ALPHABET_SIZE)
      break;
  }

  if (count_letters < ALPHABET_SIZE) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  string s;

  cin >> s;

  solve(s);

  return 0;
}
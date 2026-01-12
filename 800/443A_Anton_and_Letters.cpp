#include <iostream>
#include <string>
#include <vector>


using namespace std;

int solve(const string &s) {
  const unsigned int len = s.length();

  if (len == 2)
    return 0;

  vector<bool> seen(26, false);
  int count_distinct = 0;

  for (int i = 1; i < len; i += 3) {
    if (!seen[s[i] - 'a']) {
      seen[s[i] - 'a'] = true;
      count_distinct++;
    }
  }

  return count_distinct;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  getline(cin, s);

  cout << solve(s) << endl;

  return 0;
}
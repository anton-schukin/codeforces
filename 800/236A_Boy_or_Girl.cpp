#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(string username) {
  int count_distinct_characters = 0;
  vector<bool> seen(26, false);

  for (char ch : username) {
    if (!seen[ch - 'a']) {
      seen[ch - 'a'] = true;
      count_distinct_characters++;
    }
  }

  if (count_distinct_characters % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string username;

  cin >> username;

  solve(username);

  return 0;
}
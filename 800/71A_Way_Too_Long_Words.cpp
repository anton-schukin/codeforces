#include <iostream>
#include <string>

using namespace std;

string solve_for_word(string word) {
  int len = word.length();

  if (len <= 10) {
    return word;
  }

  return word[0] + to_string(len - 2) + word[len - 1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  while (n--) {
    string word;

    cin >> word;

    cout << solve_for_word(word) << endl;
  }

  return 0;
}
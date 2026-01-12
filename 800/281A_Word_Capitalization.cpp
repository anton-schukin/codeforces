#include <cctype>
#include <iostream>

using namespace std;

void capitalize_word(string &word) {
  if (islower(word[0])) {
    word[0] -= ('a' - 'A');
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;

  cin >> word;

  capitalize_word(word);

  cout << word << endl;

  return 0;
}
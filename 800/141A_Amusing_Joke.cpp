#include <iostream>
#include <vector>

using namespace std;

const int ALPHABET_SIZE = 26;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> letter_counts(ALPHABET_SIZE, 0);

  string name1, name2;

  cin >> name1;
  cin >> name2;

  for (const char ch : name1) {
    letter_counts[ch - 'A']++;
  }
  for (const char ch : name2) {
    letter_counts[ch - 'A']++;
  }

  string shuffled;
  cin >> shuffled;

  for (const char ch : shuffled) {
    letter_counts[ch - 'A']--;
  }

  bool valid = true;

  for (int i = 0; i < ALPHABET_SIZE && valid; i++) {
    if (letter_counts[i] != 0) {
      valid = false;
    }
  }

  if (valid) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
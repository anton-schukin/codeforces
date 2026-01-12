#include <iostream>
#include <vector>

using namespace std;

void solve(string &word) {
  const unsigned int len = word.length();
  vector<int> uppercase_indices, lowercase_indices;

  for (int i = 0; i < len; i++) {
    if (word[i] >= 'A' && word[i] <= 'Z') {
      uppercase_indices.push_back(i);
    } else {
      lowercase_indices.push_back(i);
    }
  }

  if (uppercase_indices.size() > lowercase_indices.size()) {
    for (const int idx : lowercase_indices) {
      word[idx] -= 'a' - 'A';
    }
  } else {
    for (const int idx : uppercase_indices) {
      word[idx] += 'a' - 'A';
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;

  cin >> word;

  solve(word);

  cout << word << endl;

  return 0;
}
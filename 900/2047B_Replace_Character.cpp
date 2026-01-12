#include <climits>
#include <iostream>
#include <vector>

using namespace std;

const int ALPHABET_SIZE = 26;

void solve(string &s, int n) {
  vector<int> char_counts(26, 0);

  for (int i = 0; i < n; i++) {
    char_counts[s[i] - 'a']++;
  }

  int most_frequent_count = INT_MIN, least_frequent_count = INT_MAX;
  char most_frequent, least_frequent;

  for (int i = 0; i < ALPHABET_SIZE; i++) {
    if (char_counts[i] > most_frequent_count) {
      most_frequent = i + 'a';
      most_frequent_count = char_counts[i];
    }
    if (char_counts[i] < least_frequent_count && char_counts[i] > 0) {
      least_frequent = i + 'a';
      least_frequent_count = char_counts[i];
    }
  }

  if (most_frequent == least_frequent) {
    for (int i = 0; i < n; i++) {
      if (s[i] != most_frequent) {
        s[i] = most_frequent;
        return;
      }
    }
  }

  int most_frequent_idx = -1, least_frequent_idx = -1;

  for (int i = 0; i < n; i++) {
    if (s[i] == most_frequent) {
      most_frequent_idx = i;
    } else if (s[i] == least_frequent) {
      least_frequent_idx = i;
    }
  }

  if (most_frequent_idx != -1 && least_frequent_idx != -1) {
    s[least_frequent_idx] = s[most_frequent_idx];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    solve(s, n);

    cout << s << endl;
  }

  return 0;
}
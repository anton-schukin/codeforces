#include <iostream>

using namespace std;

int solve(string &s, int n) {
  int num_one_sequences;
  bool is_in_one_sequence;

  if (s[0] == '0') {
    num_one_sequences = 0;
    is_in_one_sequence = false;
  } else {
    num_one_sequences = 1;
    is_in_one_sequence = true;
  }

  for (int i = 1; i < n; i++) {
    if (!is_in_one_sequence && s[i] == '1') {
      num_one_sequences++;
      is_in_one_sequence = true;
    } else if (is_in_one_sequence && s[i] == '0') {
      is_in_one_sequence = false;
    }
  }

  if (s[n - 1] == '1') {
    return (num_one_sequences - 1) * 2 + 1;
  }

  return num_one_sequences * 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << solve(s, n) << endl;
  }
}
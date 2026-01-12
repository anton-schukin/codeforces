#include <iostream>
#include <vector>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

void solve(const string &s, const int n) {
  int num_seq_0 = 0, num_1 = 0;
  char prev = '\n';

  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      num_1++;
    }
    if (prev != '0' && s[i] == '0') {
      num_seq_0++;
    }

    prev = s[i];
  }

  if (num_seq_0 >= num_1) {
    print_failure();
  } else {
    print_success();
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
  }

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 50;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

void solve(const vector<int> &a, const int n) {
  vector<int> counts_gte(MAX_N, 0);

  for (int i = 0; i < n; i++) {
    counts_gte[a[i] - 1]++;
  }

  for (int i = 0; i < MAX_N; i++) {
    if (counts_gte[i] % 2 != 0) {
      print_success();
      return;
    }
  }

  print_failure();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    solve(a, n);
  }

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

void solve(const vector<int> &permutation, int n) {
  if (n == 1) {
    print_success();
    return;
  }

  for (int i = 0; i < n; i++) {
    if ((i == 0 && permutation[0] != 1 && permutation[1] != 1) ||
        (i == n - 1 && permutation[n - 2] != n && permutation[n - 1] != n) ||
        (i != 0 && i != n - 1 && permutation[i - 1] != i + 1 &&
         permutation[i] != i + 1 && permutation[i + 1] != i + 1)) {
      print_failure();
      return;
    }
  }

  print_success();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
      cin >> permutation[i];
    }

    solve(permutation, n);
  }
  return 0;
}
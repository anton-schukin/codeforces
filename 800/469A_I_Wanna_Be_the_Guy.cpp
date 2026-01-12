#include <iostream>
#include <vector>

using namespace std;

void print_success() { cout << "I become the guy." << endl; }

void print_fail() { cout << "Oh, my keyboard!" << endl; }

void solve(const vector<int> &x_pass, const int p, const vector<int> &y_pass,
           const int q, const int n) {
  if (p + q < n) {
    print_fail();
    return;
  }

  vector<bool> seen(n, false);
  int passed_levels = 0;

  for (int i = 0; i < p; i++) {
    if (!seen[x_pass[i] - 1]) {
      seen[x_pass[i] - 1] = true;
      passed_levels++;
    }

    if (passed_levels == n)
      break;
  }

  for (int i = 0; i < q; i++) {
    if (!seen[y_pass[i] - 1]) {
      seen[y_pass[i] - 1] = true;
      passed_levels++;
    }

    if (passed_levels == n)
      break;
  }

  if (passed_levels == n) {
    print_success();
  } else {
    print_fail();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int p;
  cin >> p;

  vector<int> x_pass(p);

  for (int i = 0; i < p; i++) {
    cin >> x_pass[i];
  }

  int q;
  cin >> q;

  vector<int> y_pass(q);

  for (int i = 0; i < q; i++) {
    cin >> y_pass[i];
  }

  solve(x_pass, p, y_pass, q, n);

  return 0;
}
#include <iostream>

using namespace std;

void solve(const int n) {
  string prefix = "I hate";

  for (int i = 2; i <= n; i++) {
    prefix += i % 2 ? " that I hate" : " that I love";
  }

  cout << prefix + " it" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  solve(n);

  return 0;
}
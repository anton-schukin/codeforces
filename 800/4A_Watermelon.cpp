#include <iostream>

using namespace std;

bool solve(int w) { return w > 2 && (w - 2) % 2 == 0; }

int main() {
  int w;

  cin >> w;

  bool ans = solve(w);

  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    const int side_len = max(min(2 * a, 2 * b), max(a, b));
    cout << side_len * side_len << endl;
  }

  return 0;
}
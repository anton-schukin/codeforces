#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << 1 << endl << a << endl;
  } else if (a < b) {
    cout << 3 << endl
         << (a * 3) - 2 * b - 1 << " " << b << " " << b + 1 << endl;
  } else {
    cout << 3 << endl
         << b - 1 << " " << b << " " << (a * 3) - 2 * b + 1 << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string a, b;
    cin >> a >> b;

    const char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    cout << a << " " << b << endl;
  }

  return 0;
}
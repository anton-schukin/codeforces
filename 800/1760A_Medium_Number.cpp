#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a <= b && b <= c) || (c <= b && b <= a)) {
      cout << b << endl;
    } else if ((b <= a && a <= c) || (c <= a && a <= b)) {
      cout << a << endl;
    } else {
      cout << c << endl;
    }
  }

  return 0;
}
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

    if (a == b)
      cout << c;
    else if (a == c)
      cout << b;
    else if (b == c)
      cout << a;

    cout << endl;
  }

  return 0;
}
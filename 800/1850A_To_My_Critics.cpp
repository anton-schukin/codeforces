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

    if (a + b >= 10 || a + c >= 10 || b + c >= 10)
      cout << "YES";
    else
      cout << "NO";

    cout << endl;
  }

  return 0;
}
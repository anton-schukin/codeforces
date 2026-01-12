#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long a, b, m;
    cin >> a >> b >> m;

    cout << m / a + m / b + 2 << endl;
  }

  return 0;
}
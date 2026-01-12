#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string b;
    cin >> b;

    string a;
    const unsigned int len = b.length();

    for (int i = 0; i < len; i += 2) {
      a += b[i];
    }

    a += b[len - 1];

    cout << a << endl;
  }

  return 0;
}
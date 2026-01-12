#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string a;
    cin >> a;

    const int len = static_cast<int>(a.length());

    for (int i = len - 1; i >= 0; i--) {
      if (a[i] == 'p')
        cout << 'q';
      else if (a[i] == 'q')
        cout << 'p';
      else if (a[i] == 'w')
        cout << 'w';
    }

    cout << endl;
  }

  return 0;
}
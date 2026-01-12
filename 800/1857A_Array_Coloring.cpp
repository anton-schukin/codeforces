#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int count_odd = 0;

    while (n--) {
      int num;
      cin >> num;

      if (num % 2 != 0)
        count_odd++;
    }

    if (count_odd % 2 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
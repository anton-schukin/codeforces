#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int num;

      cin >> num;

      if (num == 1) {
        cout << abs(3 - i) + abs(3 - j) << endl;
      }
    }
  }

  return 0;
}
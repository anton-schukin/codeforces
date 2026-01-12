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
    int k;
    cin >> k;

    int num = 0;

    while (k--) {
      num++;
      while (num % 10 == 3 || num % 3 == 0) {
        num++;
      }
    }

    cout << num << endl;
  }

  return 0;
}
#include <climits>
#include <iostream>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;

    int num_operations = 0;

    while (a <= n && b <= n) {
      if (a < b) {
        a += b;
      } else {
        b += a;
      }
      num_operations++;
    }

    cout << num_operations << endl;
  }

  return 0;
}
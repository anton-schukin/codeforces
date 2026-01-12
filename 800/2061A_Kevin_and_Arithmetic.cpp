#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int num_even = 0, num_odd = 0;

    while (n--) {
      int num;
      cin >> num;

      if (num % 2)
        num_odd++;
      else
        num_even++;
    }

    cout << (num_even > 0 ? num_odd + 1 : num_odd - 1) << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    int count = 1;
    while (n >= 4) {
      n /= 4;
      count *= 2;
    }

    cout << count << endl;
  }

  return 0;
}
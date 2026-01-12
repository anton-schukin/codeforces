#include <iostream>

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

    int curr_mod = 0;
    for (int i = 1; i <= n; i++, curr_mod++) {
      cout << i + curr_mod << " ";
    }
    cout << endl;
  }

  return 0;
}
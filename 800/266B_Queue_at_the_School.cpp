#include <iostream>

using namespace std;

void solve(string &arrangement, const int n, int t) {
  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      if (arrangement[i] == 'B' && arrangement[i + 1] == 'G') {
        arrangement[i] = 'G';
        arrangement[i + 1] = 'B';
        i++;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t;

  cin >> n >> t;

  string arrangement;

  cin >> arrangement;

  solve(arrangement, n, t);

  cout << arrangement << endl;

  return 0;
}
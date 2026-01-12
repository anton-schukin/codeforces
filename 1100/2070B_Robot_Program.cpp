#include <iostream>

using namespace std;
using ll = long long;

ll solve(string s, ll n, ll x, ll k) {
  ll pos = x, move_idx = 0, moves_zero_to_zero = -1, ans = 0;

  while (k--) {
    char move = s[move_idx];

    pos += (move == 'R' ? 1 : -1);

    if (pos == 0) {
      move_idx = -1; // will be updated to zero
      ++ans;

      if (moves_zero_to_zero > 0) {
        ans += k / moves_zero_to_zero;
        break;
      }

      moves_zero_to_zero = 0;
    }

    if (move_idx == n - 1) {
      break;
    }

    ++move_idx;
    if (moves_zero_to_zero != -1) {
      ++moves_zero_to_zero;
    }
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    ll n, x, k;
    cin >> n >> x >> k;

    string s;
    cin >> s;

    cout << solve(s, n, x, k) << endl;
  }

  return 0;
}
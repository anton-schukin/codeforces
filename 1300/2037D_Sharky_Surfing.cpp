#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
typedef long long ll;

#define fast_io()                                                              \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

ll solve(vector<pair<ll, ll>> &hurdles, vector<pair<ll, ll>> &power_ups, ll n,
         ll m) {
  ll curr_power_ups_idx = 0;
  ll ans = 0;
  ll curr_jump_power = 1;

  priority_queue<ll> q;

  for (ll i = 0; i < n; i++) {
    pair<ll, ll> hurdle = hurdles[i];
    const ll dist = hurdle.second - hurdle.first + 2;

    for (; curr_power_ups_idx < m &&
           power_ups[curr_power_ups_idx].first < hurdle.first;
         curr_power_ups_idx++) {
      q.push(power_ups[curr_power_ups_idx].second);
    }

    while (!q.empty() && curr_jump_power < dist) {
      curr_jump_power += q.top();
      q.pop();
      ans++;
    }

    if (q.empty() && curr_jump_power < dist) {
      return -1;
    }
  }

  return ans;
}

int main() {
  fast_io();

  ll t;
  cin >> t;

  while (t--) {
    ll n, m, L;
    cin >> n >> m >> L;

    vector<pair<ll, ll>> hurdles(n);

    for (ll i = 0; i < n; i++) {
      cin >> hurdles[i].first >> hurdles[i].second;
    }

    vector<pair<ll, ll>> power_ups(m);

    for (ll i = 0; i < m; i++) {
      cin >> power_ups[i].first >> power_ups[i].second;
    }

    cout << solve(hurdles, power_ups, n, m) << endl;
  }

  return 0;
}
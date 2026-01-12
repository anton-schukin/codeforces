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

const ll MAXN = 100001;

vector<vector<ll>> prime_factors(MAXN);

void precompute_prime_factors() {
  for (ll i = 2; i <= MAXN; i++) {
    if (prime_factors[i].empty()) {
      for (ll j = i; j <= MAXN; j += i) {
        prime_factors[j].push_back(i);
      }
    }
  }
}

#define fast_io()                                                              \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);                                                            \
  cout.tie(nullptr);

int main() {
  fast_io();

  precompute_prime_factors();

  ll n, m;
  cin >> n >> m;

  unordered_set<ll> activated_colliders;
  unordered_map<ll, ll> prime_to_collider;

  for (ll i = 0; i < m; i++) {
    char op;
    ll collider;

    cin >> op >> collider;
    if (op == '+') {
      if (activated_colliders.find(collider) != activated_colliders.end()) {
        cout << "Already on" << endl;
      } else {
        vector<ll> primes = prime_factors[collider];
        bool conflict = false;
        ll conflict_with = -1;

        for (ll prime : primes) {
          if (prime_to_collider[prime] != 0) {
            conflict = true;
            conflict_with = prime_to_collider[prime];
          }
        }

        if (conflict) {
          cout << "Conflict with " << conflict_with << endl;
        } else {
          for (ll prime : primes) {
            prime_to_collider[prime] = collider;
          }
          activated_colliders.insert(collider);
          cout << "Success" << endl;
        }
      }
    } else {
      if (activated_colliders.find(collider) == activated_colliders.end()) {
        cout << "Already off" << endl;
      } else {
        vector<ll> primes = prime_factors[collider];

        for (ll prime : primes) {
          prime_to_collider[prime] = 0;
        }
        activated_colliders.erase(collider);
        cout << "Success" << endl;
      }
    }
  }

  return 0;
}
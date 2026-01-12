#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

long long solve(vector<long long> &a, long long n, long long k, long long x) {
  sort(a.begin(), a.end());

  priority_queue<long long, vector<long long>, greater<long long>> differences;
  long long groups = 1;

  for (long long i = 0; i < n - 1; ++i) {
    if (a[i + 1] - a[i] > x) {
      differences.push((a[i + 1] - a[i] - 1) / x);
      ++groups;
    }
  }

  while (k > 0 && !differences.empty()) {
    long long diff = differences.top();
    differences.pop();

    if (k >= diff) {
      k -= diff;
      --groups;
    } else {
      k = 0;
    }
  }

  return groups;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, k, x;
  cin >> n >> k >> x;

  vector<long long> a(n);

  for (long long &num : a) {
    cin >> num;
  }

  cout << solve(a, n, k, x) << endl;

  return 0;
}
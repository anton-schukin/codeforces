#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;

    for (long long i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    if ((2 * sum) % n != 0) {
      cout << 0 << endl;
      continue;
    }

    const long long target_sum = (2 * sum) / n;
    map<long long, long long> freq_map;
    long long ans = 0;

    for (long long i = 0; i < n; i++) {
      long long target = target_sum - a[i];
      ans += freq_map[target];
      freq_map[a[i]]++;
    }

    cout << ans << endl;
  }

  return 0;
}
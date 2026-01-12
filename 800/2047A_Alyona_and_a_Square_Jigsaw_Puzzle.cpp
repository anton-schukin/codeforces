#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> &a, const int n) {
  int ans = 1;
  int curr_layer_size = 8;
  int missing_curr_layer = 8;

  for (int i = 1; i < n; i++) {
    while (a[i] > missing_curr_layer) {
      a[i] -= missing_curr_layer;
      curr_layer_size += 8;
      missing_curr_layer = curr_layer_size;
    }

    if (a[i] == missing_curr_layer) {
      ans++;
      curr_layer_size += 8;
      missing_curr_layer = curr_layer_size;
    } else {
      missing_curr_layer -= a[i];
    }
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << solve(a, n) << endl;
  }

  return 0;
}
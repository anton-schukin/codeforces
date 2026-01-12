#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int k) {
  vector<int> permutation(n, -1);
  int curr_num = 1, curr_idx;

  for (curr_idx = k - 1; curr_idx < n; curr_idx += k) {
    permutation[curr_idx] = curr_num++;
  }

  for (int i = 0; i < n; i++) {
    if (permutation[i] == -1) {
      cout << curr_num++ << " ";
    } else {
      cout << permutation[i] << " ";
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    solve(n, k);
  }

  return 0;
}
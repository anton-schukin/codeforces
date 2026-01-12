#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> brand_costs;

    for (int i = 0; i < k; i++) {
      int b_i, c_i;
      cin >> b_i >> c_i;

      brand_costs[b_i] += c_i;
    }

    vector<pair<int, int>> vec(brand_costs.begin(), brand_costs.end());

    sort(vec.begin(), vec.end(),
         [](const auto &a, const auto &b) { return a.second > b.second; });

    int total_cost = 0;
    for (int i = 0; i < n && i < vec.size(); i++) {
      total_cost += vec[i].second;
    }

    cout << total_cost << endl;
  }

  return 0;
}
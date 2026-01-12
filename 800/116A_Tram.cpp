#include <iostream>
#include <vector>

using namespace std;

int solve(const vector<pair<int, int>> &passenger_movements, int n) {
  int curr_minimum_capacity = 0;
  int curr_passengers_in_tram = 0;

  for (int i = 0; i < n; i++) {
    curr_passengers_in_tram +=
        passenger_movements[i].second - passenger_movements[i].first;
    curr_minimum_capacity = max(curr_minimum_capacity, curr_passengers_in_tram);
  }

  return curr_minimum_capacity;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  vector<pair<int, int>> passenger_movements(n);

  for (int i = 0; i < n; i++) {
    cin >> passenger_movements[i].first >> passenger_movements[i].second;
  }

  cout << solve(passenger_movements, n) << endl;

  return 0;
}
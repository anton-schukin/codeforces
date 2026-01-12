#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int full_dist = a + b + c;
    int full_laps = n / full_dist;

    int days = 3 * full_laps;
    int dist = full_laps * full_dist;

    if (dist < n) {
      if (dist + a >= n) {
        days++;
      } else if (dist + a + b >= n) {
        days += 2;
      } else {
        days += 3;
      }
    }

    cout << days << endl;
  }

  return 0;
}
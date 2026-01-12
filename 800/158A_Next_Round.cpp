#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;

  cin >> n >> k;

  int total_advance = 0, kth_place_score;

  for (int i = 1; i <= n; i++) {
    int score;

    cin >> score;

    if (score <= 0) {
      continue;
    }

    if (i <= k) {
      total_advance++;

      if (i == k) {
        kth_place_score = score;
      }
    } else if (score == kth_place_score) {
      total_advance++;
    }
  }

  cout << total_advance << endl;

  return 0;
}
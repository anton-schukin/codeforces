#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int curr_score;
  cin >> curr_score;

  int curr_min = curr_score, curr_max = curr_score, amazing_scores = 0;

  while (--n) {
    cin >> curr_score;

    if (curr_score < curr_min) {
      amazing_scores++;
      curr_min = curr_score;
    } else if (curr_score > curr_max) {
      amazing_scores++;
      curr_max = curr_score;
    }
  }

  cout << amazing_scores << endl;

  return 0;
}
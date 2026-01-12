#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int goals_a = 0, goals_b = 0, num_unknown_a = 0, num_unknown_b = 0,
        remaining_kicks_a = 5, remaining_kicks_b = 5;
    bool finished = false;

    for (int i = 0; i < 10; i++) {
      if (s[i] == '1') {
        if (i % 2 == 0) {
          goals_a++;
        } else {
          goals_b++;
        }
      } else if (s[i] == '?') {
        if (i % 2 == 0) {
          num_unknown_a++;
        } else {
          num_unknown_b++;
        }
      }

      if (i % 2 == 0) {
        remaining_kicks_a--;
      } else {
        remaining_kicks_b--;
      }

      if (((goals_a - goals_b + num_unknown_a) > remaining_kicks_b) ||
          ((goals_b - goals_a + num_unknown_b) > remaining_kicks_a)) {
        cout << i + 1 << endl;
        finished = true;
        break;
      }
    }

    if (!finished) {
      cout << 10 << endl;
    }
  }

  return 0;
}
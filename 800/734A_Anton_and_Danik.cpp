#include <iostream>

using namespace std;

void solve(const string &outcomes, int n) {
  int count_a = 0, count_d = 0;

  for (int i = 0; i < n; i++) {
    if (outcomes[i] == 'A') {
      count_a++;
    } else {
      count_d++;
    }
  }

  if (count_a > count_d) {
    cout << "Anton" << endl;
  } else if (count_a < count_d) {
    cout << "Danik" << endl;
  } else {
    cout << "Friendship" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  string outcomes;

  cin >> outcomes;

  solve(outcomes, n);

  return 0;
}
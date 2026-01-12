#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> lists(m);
    for (int i = 0; i < m; i++) {
      cin >> lists[i];
    }

    vector<bool> questions(n, false);
    for (int i = 0; i < k; i++) {
      int question_num;
      cin >> question_num;

      questions[question_num - 1] = true;
    }

    for (int i = 0; i < m; i++) {
      if (k - (questions[lists[i] - 1] ? 1 : 0) == n - 1) {
        cout << '1';
      } else {
        cout << '0';
      }
    }
    cout << endl;
  }

  return 0;
}
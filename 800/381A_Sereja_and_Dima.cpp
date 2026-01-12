#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &cards, int n) {
  int left = 0, right = n - 1, score_sergey = 0, score_dima = 0;
  bool sergey_turn = true;

  while (left <= right) {
    if (cards[left] > cards[right]) {
      if (sergey_turn) {
        score_sergey += cards[left];
      } else {
        score_dima += cards[left];
      }
      left++;
    } else {
      if (sergey_turn) {
        score_sergey += cards[right];
      } else {
        score_dima += cards[right];
      }
      right--;
    }
    sergey_turn = !sergey_turn;
  }

  cout << score_sergey << " " << score_dima << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  solve(cards, n);

  return 0;
}
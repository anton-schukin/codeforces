#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int g, c, l;
  cin >> g >> c >> l;

  int min_score = min(g, min(c, l)), max_score = max(g, max(c, l));
  if (max_score - min_score >= 10) {
    cout << "check again" << endl;
  } else {
    int median = g + c + l - min_score - max_score;
    cout << "final " << median << endl;
  }

  return 0;
}
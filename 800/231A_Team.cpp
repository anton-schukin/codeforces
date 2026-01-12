#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int problems_solved = 0;

  while (n--) {
    int sure1, sure2, sure3;

    cin >> sure1 >> sure2 >> sure3;

    if (sure1 + sure2 + sure3 >= 2) {
      problems_solved++;
    }
  }

  cout << problems_solved << endl;

  return 0;
}
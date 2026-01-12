#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string expr;
    cin >> expr;

    cout << expr[0] - '0' + expr[2] - '0' << endl;
  }

  return 0;
}
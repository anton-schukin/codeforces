#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  cin >> a >> b;

  cout << min(a, b) << " " << abs(a - b) / 2 << endl;

  return 0;
}
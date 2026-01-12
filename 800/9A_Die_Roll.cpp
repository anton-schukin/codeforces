#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int y, w;
  cin >> y >> w;

  const int maximum = max(y, w);

  if (maximum == 6)
    cout << "1/6";
  else if (maximum == 5)
    cout << "1/3";
  else if (maximum == 4)
    cout << "1/2";
  else if (maximum == 3)
    cout << "2/3";
  else if (maximum == 2)
    cout << "5/6";
  else if (maximum == 1)
    cout << "1/1";

  cout << endl;

  return 0;
}
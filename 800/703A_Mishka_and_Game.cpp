#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int wins1 = 0, wins2 = 0;
  while (n--) {
    int a, b;
    cin >> a >> b;

    if (a > b)
      wins1++;
    else if (b > a)
      wins2++;
  }

  if (wins1 > wins2)
    cout << "Mishka";
  else if (wins1 < wins2)
    cout << "Chris";
  else
    cout << "Friendship is magic!^^";

  cout << endl;

  return 0;
}
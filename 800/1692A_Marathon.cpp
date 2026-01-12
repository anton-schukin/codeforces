#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int in_front_of_a = 0;
    if (b > a)
      in_front_of_a++;
    if (c > a)
      in_front_of_a++;
    if (d > a)
      in_front_of_a++;

    cout << in_front_of_a << endl;
  }

  return 0;
}
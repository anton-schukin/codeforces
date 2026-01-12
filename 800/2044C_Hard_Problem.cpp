#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    const int group_a_seated = min(m, a);
    const int group_b_seated = min(m, b);
    const int group_c_seated = min(2 * m - group_a_seated - group_b_seated, c);

    cout << group_a_seated + group_b_seated + group_c_seated << endl;
  }

  return 0;
}
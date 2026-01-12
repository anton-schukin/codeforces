#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    if ((s1 > s3 && s1 > s4 && s2 > s3 && s2 > s4) ||
        (s1 < s3 && s1 < s4 && s2 < s3 && s2 < s4))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}
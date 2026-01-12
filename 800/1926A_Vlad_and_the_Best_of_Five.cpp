#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int num_A = 0, num_B = 0;

    for (int i = 0; i < 5; i++) {
      if (s[i] == 'A')
        num_A++;
      else
        num_B++;
    }

    if (num_A > num_B) {
      cout << 'A' << endl;
    } else {
      cout << 'B' << endl;
    }
  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    bool finished_first_strip = false;
    int num_words = 0;
    while (n--) {
      string s;
      cin >> s;

      const int len = static_cast<int>(s.length());

      if (!finished_first_strip && len > m) {
        finished_first_strip = true;
      } else if (!finished_first_strip) {
        m -= len;
        num_words++;
      }
    }

    cout << num_words << endl;
  }

  return 0;
}
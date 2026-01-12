#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  int people_at_stop = 0;

  while (n--) {
    char event;
    int num;
    cin >> event >> num;

    if (event == 'P') {
      people_at_stop += num;
    } else if (event == 'B') {
      const int min_val = min(num, people_at_stop);
      people_at_stop -= min_val;

      if (num - min_val >= 1) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
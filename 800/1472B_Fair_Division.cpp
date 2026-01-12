#include <iostream>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int cnt_1 = 0, cnt_2 = 0;

    while (n--) {
      int w;
      cin >> w;

      if (w == 1)
        cnt_1++;
      else if (w == 2)
        cnt_2++;
    }

    if ((cnt_1 + 2 * cnt_2) % 2 == 0 && (cnt_2 % 2 == 0 || cnt_1 >= 2)) {
      print_success();
    } else {
      print_failure();
    }
  }

  return 0;
}
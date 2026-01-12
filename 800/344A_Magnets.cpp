#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int num_groups = 1;
  char prev_end = '\n';

  while (n--) {
    string magnet;

    cin >> magnet;

    if (prev_end == magnet[0]) {
      num_groups++;
    }

    prev_end = magnet[1];
  }

  cout << num_groups << endl;

  return 0;
}
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int curr_height = 0, curr_blocks = 0;

  while (curr_blocks < n) {
    curr_height++;
    curr_blocks += (curr_height * (curr_height + 1)) / 2;
  }

  cout << ((curr_blocks == n) ? curr_height : curr_height - 1) << endl;

  return 0;
}
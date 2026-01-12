#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, r;
  cin >> k >> r;

  int min_shovels = 1, curr_shovels_price = k;

  while ((curr_shovels_price - r) % 10 != 0 && curr_shovels_price % 10 != 0) {
    min_shovels++;
    curr_shovels_price += k;
  }

  cout << min_shovels << endl;

  return 0;
}
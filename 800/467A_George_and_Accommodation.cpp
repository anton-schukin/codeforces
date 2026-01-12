#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  int count_available_rooms = 0;

  while (n--) {
    int p, q;

    cin >> p >> q;

    if (q - p >= 2) {
      count_available_rooms++;
    }
  }

  cout << count_available_rooms << endl;

  return 0;
}
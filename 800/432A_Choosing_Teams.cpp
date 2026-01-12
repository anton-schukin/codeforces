#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;

  int count_smaller = 0;

  while (n--) {
    int num;
    cin >> num;

    if (num + k <= 5) {
      count_smaller++;
    }
  }

  cout << count_smaller / 3 << endl;

  return 0;
}
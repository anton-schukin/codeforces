#include <climits>
#include <iostream>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int digits[9]; // max amount of digits is 9
    int min_digit_idx = INT_MAX, min_digit = INT_MAX;

    for (int i = 0; i < n; i++) {
      int digit;
      cin >> digit;
      digits[i] = digit;

      if (digit < min_digit) {
        min_digit = digit;
        min_digit_idx = i;
      }
    }

    int product = 1;

    for (int i = 0; i < n; i++) {
      product *= i == min_digit_idx ? digits[i] + 1 : digits[i];
    }

    cout << product << endl;
  }

  return 0;
}
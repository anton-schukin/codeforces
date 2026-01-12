#include <iostream>

using namespace std;

void solve(long long n) {
  int count_lucky_digits = 0;

  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      count_lucky_digits++;
    }
    n /= 10;
  }

  if (count_lucky_digits == 4 || count_lucky_digits == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;

  cin >> n;

  solve(n);

  return 0;
}
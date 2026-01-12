#include <iostream>

using namespace std;

bool is_prime(const int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 4; i < n - 4; i++) {
    const int j = n - i;

    if (!is_prime(i) && !is_prime(j)) {
      cout << i << " " << j << endl;
      break;
    }
  }

  return 0;
}
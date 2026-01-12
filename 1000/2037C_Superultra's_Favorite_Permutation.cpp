#include <iostream>

using namespace std;

bool isPrime(int n) {
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

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int i = n % 2 == 0 ? n - 1 : n;
    int j = 2;

    while (j <= n && isPrime(j + i)) {
      j += 2;
    }

    if (j > n) {
      cout << "-1" << endl;
      continue;
    }

    int init_j = j;

    for (int i = 1; i <= n; i += 2) {
      cout << i << " ";
    }

    for (; j <= n; j += 2) {
      cout << j << " ";
    }

    for (int k = 2; k < init_j; k += 2) {
      cout << k << " ";
    }

    cout << endl;
  }

  return 0;
}
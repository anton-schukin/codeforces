#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int t;
  std::cin >> t;
  while (t--) {
    int n, x;
    std::cin >> n >> x;

    int prev;
    std::cin >> prev;
    int res = prev;

    for (int i = 1; i < n; ++i) {
      int pos;
      std::cin >> pos;

      if (pos - prev > res)
        res = pos - prev;
      prev = pos;
    }
    if ((x - prev) * 2 > res)
      res = (x - prev) * 2;

    std::cout << res << std::endl;
  }

  return 0;
}
#include <iostream>
#include <string>

int solve(const std::string &s) {
  int left = 0, right = s.size() - 1;
  int res = s.size();
  while (left < right && s[left] != s[right]) {
    left++;
    right--;
    res -= 2;
  }
  return res;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::string s;
    std::cin >> n >> s;
    std::cout << solve(s) << std::endl;
  }
}
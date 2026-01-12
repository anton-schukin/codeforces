#include <iostream>

using namespace std;

long long solve(const long long n) { return n / 2 - (n % 2 ? n : 0); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;

  cin >> n;

  cout << solve(n) << endl;

  return 0;
}
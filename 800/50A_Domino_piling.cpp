#include <iostream>

using namespace std;

int solve(int M, int N) { return (M * N) / 2; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int M, N;

  cin >> M >> N;

  cout << solve(M, N) << endl;

  return 0;
}
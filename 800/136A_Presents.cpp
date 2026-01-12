#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  vector<int> res(n);

  for (int i = 0; i < n; i++) {
    int cur;

    cin >> cur;

    res[cur - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
  }
  cout << endl;

  return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int count_1 = 0, count_2 = 0, count_3 = 0;
  vector<vector<int>> indices(3);

  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;

    if (num == 1) {
      count_1++;
      indices[0].push_back(i);
    } else if (num == 2) {
      count_2++;
      indices[1].push_back(i);
    } else {
      count_3++;
      indices[2].push_back(i);
    }
  }

  const int res = min(count_1, min(count_2, count_3));
  cout << res << endl;

  for (int i = 0; i < res; i++) {
    cout << indices[0][i] << " " << indices[1][i] << " " << indices[2][i]
         << endl;
  }

  return 0;
}
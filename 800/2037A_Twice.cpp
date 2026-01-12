#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int score = 0;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1]) {
        score++;
        i++;
      }
    }

    cout << score << endl;
  }

  return 0;
}
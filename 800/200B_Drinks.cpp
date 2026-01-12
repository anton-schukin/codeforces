#include <iomanip>
#include <iostream>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  double percent = 0.0;

  for (int i = 0; i < n; i++) {
    int cur;

    cin >> cur;

    percent += static_cast<double>(cur) / n;
  }

  cout << fixed << setprecision(12) << percent << endl;

  return 0;
}
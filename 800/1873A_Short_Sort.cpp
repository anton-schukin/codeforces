#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s == "abc" || s == "bac" || s == "cba" || s == "acb")
      cout << "YES";
    else
      cout << "NO";

    cout << endl;
  }

  return 0;
}
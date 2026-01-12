#include <iostream>
#include <limits>
#include <unordered_set>

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

    unordered_set<int> seen;
    bool valid = true;

    while (n--) {
      int num;
      cin >> num;

      if (seen.find(num) != seen.end()) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        valid = false;
        break;
      }

      seen.insert(num);
    }

    if (valid)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
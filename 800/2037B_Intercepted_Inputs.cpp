#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int k;
    cin >> k;

    vector<int> arr(k);
    unordered_map<int, int> target_counts;

    for (int &num : arr) {
      cin >> num;

      if ((k - 2) % num == 0) {
        target_counts[(k - 2) / num]++;
      }
    }

    for (int num : arr) {
      if (target_counts.find(num) != target_counts.end()) {
        if (num * num == (k - 2) && target_counts[num] > 1) {
          cout << num << " " << num << endl;
          break;
        } else if (num * num != (k - 2)) {
          cout << num << " " << (k - 2) / num << endl;
          break;
        }
      }
    }
  }

  return 0;
}
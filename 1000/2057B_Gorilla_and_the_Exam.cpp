#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;

      if (freq.find(num) == freq.end()) {
        freq[num] = 1;
      } else {
        freq[num]++;
      }
    }

    vector<int> frequencies;
    for (auto &p : freq) {
      frequencies.push_back(p.second);
    }

    sort(frequencies.begin(), frequencies.end());

    int unique_count = static_cast<int>(frequencies.size());
    int changes = 0;

    for (int freq : frequencies) {
      if (changes + freq <= k) {
        changes += freq;
        unique_count--;
      } else {
        break;
      }
    }

    cout << (unique_count == 0 ? 1 : unique_count) << endl;
  }

  return 0;
}
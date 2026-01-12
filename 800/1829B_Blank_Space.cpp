#include <iostream>

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

    int curr_zero_seq_len = 0, max_zero_seq_len = 0;

    while (n--) {
      int num;
      cin >> num;

      if (num == 0) {
        curr_zero_seq_len++;
        max_zero_seq_len = max(max_zero_seq_len, curr_zero_seq_len);
      } else {
        curr_zero_seq_len = 0;
      }
    }

    cout << max_zero_seq_len << endl;
  }

  return 0;
}
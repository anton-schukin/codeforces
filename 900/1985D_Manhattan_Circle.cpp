#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    bool done = false;
    int prev_row_hashtags = 0, prev_hashtag_start_idx = -1,
        prev_hashtag_end_idx = -1;

    for (int i = 0; i < n; i++) {
      string row;
      cin >> row;

      char prev_char = '\n';
      int curr_row_hashtags = 0, curr_hashtag_start_idx = -1,
          curr_hashtag_end_idx = -1;

      for (int j = 0; j < m; j++) {
        if (row[j] == '#') {
          if (prev_char != '#') {
            curr_hashtag_start_idx = j;
          }
          curr_row_hashtags++;
        } else if (row[j] != '#' && prev_char == '#') {
          curr_hashtag_end_idx = j - 1;
        }

        prev_char = row[j];
      }

      if (curr_hashtag_end_idx == -1) {
        curr_hashtag_end_idx = m - 1;
      }

      if (!done && prev_row_hashtags > curr_row_hashtags) {
        cout << i << " "
             << (prev_hashtag_start_idx + prev_hashtag_end_idx) / 2 + 1 << endl;
        done = true;
      }

      prev_row_hashtags = curr_row_hashtags;
      prev_hashtag_start_idx = curr_hashtag_start_idx;
      prev_hashtag_end_idx = curr_hashtag_end_idx;
    }

    if (!done) {
      cout << n << " "
           << (prev_hashtag_start_idx + prev_hashtag_end_idx) / 2 + 1 << endl;
    }
  }

  return 0;
}
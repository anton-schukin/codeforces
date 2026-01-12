#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int mult = 10;
    vector<int> round_numbers;

    while (n > 0) {
      int num = n % mult;

      if (num != 0) {
        round_numbers.push_back(num);
      }

      n -= num;
      mult *= 10;
    }

    const unsigned int min_summands = round_numbers.size();
    cout << min_summands << endl;
    for (int i = min_summands - 1; i >= 0; i--) {
      cout << round_numbers[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
#include <iostream>

using namespace std;

int solve(const int num_problems, const int minutes) {
  int available_minutes = 240;
  int i = 0;

  while (available_minutes > minutes && i <= num_problems) {
    i++;
    available_minutes -= i * 5;
  }

  return available_minutes == minutes ? i : i - 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int num_problems, minutes;
  cin >> num_problems >> minutes;

  cout << solve(num_problems, minutes) << endl;

  return 0;
}
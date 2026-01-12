#include <iostream>

using namespace std;

void print_success() { cout << "YES" << endl; }

void print_failure() { cout << "NO" << endl; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int hrs, mins;
    cin >> hrs >> mins;

    cout << (23 - hrs) * 60 + 60 - mins << endl;
  }

  return 0;
}
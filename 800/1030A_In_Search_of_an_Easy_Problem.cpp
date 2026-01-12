#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;

  cin >> n;

  while (n--) {
    int response;

    cin >> response;

    if (response == 1) {
      cout << "HARD" << endl;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      return 0;
    }
  }

  cout << "EASY" << endl;

  return 0;
}
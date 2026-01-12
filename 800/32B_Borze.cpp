#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char c;

  while (cin.get(c) && c != '\n') {
    if (c == '-') {
      char c2;
      cin.get(c2);

      if (c2 == '.')
        cout << 1;
      else if (c2 == '-')
        cout << 2;
    } else if (c == '.') {
      cout << 0;
    }
  }
  cout << endl;

  return 0;
}
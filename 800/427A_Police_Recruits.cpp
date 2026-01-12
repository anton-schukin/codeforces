#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int police_officers = 0, untreated_crimes = 0;

  while (n--) {
    int num;
    cin >> num;

    if (num == -1 && police_officers == 0) {
      untreated_crimes++;
    } else if (num == -1) {
      police_officers--;
    } else {
      police_officers += num;
    }
  }

  cout << untreated_crimes << endl;

  return 0;
}
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> next_primes = {{2, 3},   {3, 5},   {5, 7},   {7, 11},
                                       {11, 13}, {13, 17}, {17, 19}, {19, 23},
                                       {23, 29}, {29, 31}, {31, 37}, {37, 41},
                                       {41, 43}, {43, 47}, {47, 53}};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  if (m == next_primes[n])
    cout << "YES";
  else
    cout << "NO";

  cout << endl;

  return 0;
}
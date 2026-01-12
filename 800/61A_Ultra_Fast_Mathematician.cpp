#include <bitset>
#include <iostream>
#include <string>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;

  cin >> a;
  cin >> b;

  const bitset<101> bits1(a);
  const bitset<101> bits2(b);

  const bitset<101> res = bits1 ^ bits2;

  const string res_str = res.to_string();

  cout << res_str.substr(101 - a.length(), 100) << endl;

  return 0;
}
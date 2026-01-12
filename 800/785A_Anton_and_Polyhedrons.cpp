#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;

int main() {
  unordered_map<string, int> polyhedron_faces = {{"Tetrahedron", 4},
                                                 {"Cube", 6},
                                                 {"Octahedron", 8},
                                                 {"Dodecahedron", 12},
                                                 {"Icosahedron", 20}};

  int n;
  cin >> n;

  long long total_faces = 0;

  for (int i = 0; i < n; ++i) {
    string polyhedron;
    cin >> polyhedron;
    total_faces += polyhedron_faces[polyhedron];
  }

  cout << total_faces << endl;

  return 0;
}
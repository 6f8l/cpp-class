#include <iostream>

using namespace std;

int main() {
  int h = 1;
  static_cast<int>(h);
  h = (int)1.0;
  h = int(1.0);
  cout << h << endl;
  return 0;
}
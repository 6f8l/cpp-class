#include <algorithm>
#include <iostream>
#include <random>

using namespace std;
random_device engine;

int main() {
  // Generates a random integer between 1 and 100
  uniform_int_distribution<unsigned> dist1(1, 100);
  int a[9];

  // Add random integers to array
  for (int i = 0; i < 10; i++) {
    a[i] = dist1(engine);
  }

  sort(a, a + 10);

  // Output the sorted integers
  for (int i = 0; i < 10; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
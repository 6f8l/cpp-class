#include <iostream>

using namespace std;

int main() {
  int i;
  int lower_limit = 10;  // 任意の数字
  int upper_limit = 100; // 任意の数字

  cout << "下限: " << lower_limit << ", "
       << "上限: " << upper_limit << endl;
  cout << "奇数: ";
  for (i = lower_limit; i < upper_limit; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}
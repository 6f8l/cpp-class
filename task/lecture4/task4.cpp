#include <iostream>

using namespace std;

void printOdds(int lower_limit, int upper_limit) {
  int i;
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

int main() {
  int lower_limit;
  int upper_limit;

  cout << "下限の値を入力してください: ";
  cin >> lower_limit;

  cout << "上限の値を入力してください: ";
  cin >> upper_limit;

  if (lower_limit >= upper_limit) {
    cout << "不正な値です" << endl;
  } else {
    printOdds(lower_limit, upper_limit);
  }
}
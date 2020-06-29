#include <fstream>
#include <iostream>

using namespace std;

void outputOdds(int lower_limit, int upper_limit) {
  int i;
  ofstream outfile("output.txt", ios_base::out);

  for (i = lower_limit; i < upper_limit; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
      outfile << i << " ";
    }
  }
  outfile.close();
  cout << endl;
  cout << "範囲の奇数をファイルへ出力しました" << endl;
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
    outputOdds(lower_limit, upper_limit);
  }
}
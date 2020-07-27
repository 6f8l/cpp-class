// 第7回課題にエラー処理を追加する

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int sumNum(string filename) {
  string str;
  int total = 0;
  ifstream datafile(filename);
  while (getline(datafile, str)) {
    string tmp;
    istringstream stream(str);
    while (getline(stream, tmp, ' ')) {
      // キャストの例外処理
      try {
        total += stoi(tmp);
      } catch (invalid_argument &e) {
        cerr << e.what() << endl;
      }
    }
  }

  // アサーション
  assert(total >= 0);

  cout << endl;
  datafile.close();
  return total;
}

int main() {
  string filename;
  cout << "ファイル名を入力してください" << endl;
  cin >> filename;

  // 戻り値のエラー処理
  if (sumNum(filename) >= 0) {
    cout << "合計: " << sumNum(filename) << endl;
  } else {
    cout << "問題が生じました。" << endl;
  }
}

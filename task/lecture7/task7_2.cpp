#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int sumNum(string filename) {
  ifstream datafile(filename);
  string str;
  int total = 0;
  while (getline(datafile, str)) {
    string tmp;
    istringstream stream(str);
    while (getline(stream, tmp, ' ')) {
      total += stoi(tmp);
    }
  }
  cout << endl;
  datafile.close();
  return total;
}

int main() {
  string filename;
  cout << "ファイル名を入力してください" << endl;
  cin >> filename;
  cout << "合計: " << sumNum(filename) << endl;
}

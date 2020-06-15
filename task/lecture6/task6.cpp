#include <iostream>
#include <regex>
#include <string>

using namespace std;

void printPhoneNum(string input_str) {
  regex rxWithHyphen(R"(^0\d{9,10})");
  sregex_iterator withIt(input_str.begin(), input_str.end(), rxWithHyphen);
  sregex_iterator withEnd;
  cout << "入力に含まれていた電話番号: " << endl;
  while (withIt != withEnd) {
    cout << (withIt++)->str() << endl;
  }

  regex rxWithoutHyphen(R"(0\d{2,3}-\d{1,4}-\d{4})");
  sregex_iterator withoutIt(input_str.begin(), input_str.end(),
                            rxWithoutHyphen);
  sregex_iterator withoutEnd;
  while (withoutIt != withoutEnd) {
    cout << (withoutIt++)->str() << endl;
  }
};

int main() {
  string input_str;
  cout << "文字を入力してください. ";
  cout << "検出可能な形式例: \"XXX-XXXX-XXXX, XXXXXXXXXXX\"" << endl;
  cin >> input_str;

  printPhoneNum(input_str);
}
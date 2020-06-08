#include <iostream>
#include <vector>

using namespace std;

void storeOdds2Array(vector<int> v) {
  // 配列に奇数を格納
  size_t v_size = v.size();
  int *a = new int[v_size];
  for (size_t i = 0; i < v_size; i++) {
    a[i] = v[i];
  }

  // 配列に格納した奇数を表示
  cout << "配列に格納した奇数: ";
  for (size_t i = 0; i < v_size; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void storeOdds2Vector(int lower_limit, int upper_limit) {
  int i;
  vector<int> v1;

  // Vectorに奇数を格納
  for (i = lower_limit; i < upper_limit; i++) {
    if (i % 2 != 0) {
      v1.push_back(i);
    }
  }

  // Vectorに格納した奇数を表示
  size_t s = v1.size();
  cout << "Vectorに格納した奇数: ";
  for (size_t i = 0; i < s; i++) {
    cout << v1[i] << " ";
  }
  cout << endl;

  storeOdds2Array(v1);
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
    cout << "下限: " << lower_limit << ", "
         << "上限: " << upper_limit << endl;
    storeOdds2Vector(lower_limit, upper_limit);
  }
}
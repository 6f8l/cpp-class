#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Student {
  string id;
  string name;

public:
  void setName(const string &newName) { name = newName; }
  string getName() { return name; }
  void setID(string newID) { id = newID; }
  string getID() { return id; }
};

vector<string> split(string &input, char delimiter) {
  istringstream stream(input);
  string field;
  vector<string> result;
  while (getline(stream, field, delimiter)) {
    result.push_back(field);
  }
  return result;
}

int main() {
  ifstream ifs("students.csv");

  string line;
  Student person;
  while (getline(ifs, line)) {
    vector<string> strvec = split(line, ',');

    for (int i = 0; i < strvec.size(); i++) {
      if (i % 2 == 0) {
        person.setID(strvec[i]);
      } else {
        person.setName(strvec[i]);

        // 出力
        cout << person.getID() << ": " << person.getName() << endl;
      }
    }
  }
}

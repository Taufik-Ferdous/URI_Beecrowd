#include <iostream>
#include <string>
using namespace std;

int main() {
  while (true) {
    char num;
    string str;
    cin>>num >>str;

    if (num=='0' && str[0] == '0') return 0;

    bool flag = false;

    for (int i = 0; i < str.length(); i++) {
      if ((str[i] != '0' || flag) && str[i] != num) {
        cout << str[i];
        flag = true;
      }
    }

    if (!flag) cout << 0;

    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  char nine = '9';
  int nine_list = nine - '0';

  // 9を数値として出力
  cout << nine_list << endl;

  string s = "45";
  cout << stoi(s) + 1 << endl;

  string t = "-27.3";
  cout << stoi(t) << endl;

  int n = 12355;
  string tostring = to_string(n);
  cout << tostring.substr(0, 3) << endl;
}
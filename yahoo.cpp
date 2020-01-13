#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  if(str.substr(0, 3) == "yah" && str[3] == str[4]){
    cout << str + "is yahoo" << endl;
  }
  else cout << "NO" << endl;

  string s = "this is a code.";
  cout << s.find("code") << endl;
  if(s.find("coffiee") == string::npos){
    cout << "Not Found" << endl;
    // 特段出力されない
    cout << string::npos << endl;
  }
}
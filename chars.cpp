#include <bits/stdc++.h>
using namespace std;

int main() {
  string a = "abc";

  // stringはchar[]が返るのでNG
  // if(a[0] == "a"){cout << "ok" << endl;}

  // stringを添え字で指定した場合はcharがかえる
  if(a[0] == 'a') cout << "ok" << endl;

  // substringではchar[]が返る
  if(a.substr(0,1) == "a") cout << "sub ok" << endl;
  
}
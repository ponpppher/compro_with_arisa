#include <bits/stdc++.h>
using namespace std;

int main() {
  //文字を定義
  string N;
  //入力
  cin >> N;
  // S初期化
  int S = 0;

  for(int i = 0; i < N.size(); i++) {
    // Nの文字数文数値に変換して総和をとる
    S += N[i] - '0';
  }

  if(stoi(N)%S == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
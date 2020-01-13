#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int sum = 0;
  cin >> N;

  // int配列
  vector<int> a(N);

  // iは変数スコープでローカル変数みたいに内部のみでつかえる
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i=0;i<N; i++) {
    sum += a[i];
  }

  cout << sum << endl;
}

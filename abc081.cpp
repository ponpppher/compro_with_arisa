#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 3;
  int A[N];
  A[0] = 2;
  A[1] = 2;
  A[2] = 2;
  int ans = 0;
  bool div_by_2 = true;

  // while * forが概算となる
  // => N log(max Ai)
  //
  // log(max Ai回)の計算
  while(div_by_2){
    // N回計算
    for(int i=0; i < N; i++) {
      if(A[i] % 2 == 1) {
        div_by_2 = false;
        break;
      }else{
        // 割り算が入るとlogになる
        A[i] /= 2;
      }
    }

    if(div_by_2){
      ans++;
    }
  }
  cout << ans << endl;

}
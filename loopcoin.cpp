#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  
  int ans;

  for(int ai=0; ai < A; ai++){
    for(int bi=0; bi<B; bi++){
      for(int ci=0; ci<C; ci++){
        int total = 500 * ai + 100 * bi + 50*ci;
        if(total == X) ans++;
      }
    }
  }
  cout << ans << endl;
}
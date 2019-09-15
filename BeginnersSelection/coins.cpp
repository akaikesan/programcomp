#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<=n;i++)
using namespace std;

int main(){
  int a, b, c, x;

  cin >> a >>b >>c >>x;

  int ctr = 0;

  rep(i,a){
    rep(j,b){
      rep(k,c){
        if (500*i + 100*j + 50*k == x){
          ctr += 1;
        }
      }
    }
  }

  cout << ctr << endl;

  return 0;
}

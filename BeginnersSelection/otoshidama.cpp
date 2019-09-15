#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<=n;i++)
typedef long long ll;
using namespace std;


int main(){
  int n,y;
  cin >> n >> y;

  rep(i,n){
    rep(j,n-i){

        if(10000*i + 5000*j + 1000*(n-i-j) == y){
          printf("%d%c%d%c%d\n",i,' ',j,' ',n-i-j);
          return 0;
      }
    }
  }

  printf("%d%c%d%c%d\n",-1,' ',-1,' ',-1);
  return 0;


}

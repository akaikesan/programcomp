#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i < (n);i++)

using namespace std;
int main (){
  int n;
  cin >> n;
  vector<int> v(n);
  int k;

  rep(i,n){
    cin >> k;
    if(k % 2 == 0) v[i] = k/2;
    else{
      cout << 0 << endl;
      return 0;
    }
  }
  k = 1;
  while(1){
    rep(i,n) {
      if(v[i]%2 == 0) v[i] /= 2;
      else{
        cout << k << endl;
        return 0;
      }
    }
    k++;
  }

  cout << k << endl;


  return 0;
}

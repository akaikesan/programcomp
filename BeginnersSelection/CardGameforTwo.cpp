#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i,n){
    cin >> v[i];
  }

  sort(v.begin(),v.end(),greater<int>());
  int a = 0;
  int b = 0;
  rep(i,n){
    if(i % 2 == 0) a += v[i];
    else b += v[i];
  }

  cout << a - b << endl;

  return 0;


}

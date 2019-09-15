#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main(){
  ll n;
  cin >> n;
  ll sum = 0;
  rep(i,n){
    sum += i;
  }

  cout << sum << endl;

  return 0;

}

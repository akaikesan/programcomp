#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i <=n;i++)
using namespace std;


int main(){
  int n, a, b;
  cin >> n >> a >> b;
  int sum = 0;
  string s;
  rep(i,n){
    s = to_string(i);
    int tmp = 0;
    for(char t:s){
      tmp += (int) t-48;
    }
    if(tmp <= b && tmp >= a){
      sum += i;
    }

  }

  cout << sum << endl;
  return 0;
}

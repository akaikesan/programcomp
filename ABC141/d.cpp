#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  priority_queue<long long int> a;

  rep(i,n) {
    int j;
    cin >> j;
    a.push(j);
  }
  rep(i,m){
    int k = a.top();
    k /= 2;
    a.pop();
    a.push(k);
  }

  long long int sum = 0;

  rep(i,n){

    sum += a.top();
    a.pop();
  }

  cout << sum << endl;
  return 0;

}

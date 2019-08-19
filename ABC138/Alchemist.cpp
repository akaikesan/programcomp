#include<bits/stdc++.h>
#include<algorithm>
#define rep(i,n) for (int i=0; i < (n);i++)
using namespace std;


int main(){
  int n;
  int mx = 0;
  double a = 0;
  cin >> n;

  vector<double> v(n);

  rep(i,n){
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  rep(i,n-1){
    v[i+1] = (double)(v[i] + v[i+1])/2;
  }

  cout << fixed;
  cout << setprecision(6) << v[n-1] << endl;


  return 0;
}

#include<bits/stdc++.h>
#include<iomanip>
#define rep(i,n) for (int i=0; i < (n);i++)
using namespace std;


int main(){
  int n,b;
  double f = 0;
  cin >> n;

  rep(i,n){
    cin >> b;
    f += (double)1/b;
  }

  f = (double)1/f;

  cout << fixed;
  cout << setprecision(6) << f << endl;

  return 0;
}

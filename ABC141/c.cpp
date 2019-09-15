#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main(){
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> p(n);

  p.resize(n);
  rep(i,n) p[i] = k - q;

  rep(i,q) {
    int in;
    cin >> in;
    p[in - 1]++;
  }


  rep(i,n){
    if(p[i] < 1) cout << "No" << endl;
    else cout << "Yes" << endl;

  }


  return 0;

}

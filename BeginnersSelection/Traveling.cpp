#include<bits/stdc++.h>
#define rep(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main(){
  int n; cin >> n;

  vector<int> t(n), x(n), y(n);

  t[0] = 0; x[0] = 0; y[0] = 0;

  rep(i,n) cin >> t[i] >> x[i] >> y[i];

  string ans="Yes";

  rep(i,n){
    int step = abs(x[i] - x[i-1]) + abs(y[i]-y[i-1]);

    int time = abs(t[i] - t[i-1]);

    if ((time - step < 0) || (time - step)%2 != 0){
      ans = "No";
      break;
    }

  }


  cout << ans << endl;

  return 0;

}

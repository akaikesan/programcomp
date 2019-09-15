#include<bits/stdc++.h>
#define rep(i,n) for (int i=0; i < (n);i++)
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  vector<int> ans(n);
  int cnt = 0;
  rep(ri,2){
    rep(i,n){
      if(s[i] == 'R' )cnt++;
      else
      {
        ans[i] += cnt/2;
        ans[i-1] += (cnt+1)/2;
        cnt=0;
      }
    }

    reverse(ans.begin(),ans.end());
    reverse(s.begin(),s.end());
    rep(i,n){
      if(s[i] == 'L')s[i] = 'R';
      else s[i] = 'L';
    }

  }
  rep(i,n)
  {
   printf("%d%c",ans[i], i==i-1?'\n':' ');
  }
  return 0;
}

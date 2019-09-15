#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

void ans(int i, int j,int &mx,int &record,string &s,int &base){
  if(s[i] == s[j] && i < base){
    record++;

    if (j+1<mx){
      ans(i+1,j+1,mx,record,s,base);
    }
  }

}

int main(){
  string alp = "qwertyuiopasdfghjklzxcvbnm"
  string s;
  int n;
  cin >> n;
  cin >> s;
  int record = 0;
  int mx = 0;
  map<String,int> mp(30);

  for(int i=0;i<alp.length();i++){
    mp[alp[i]] = 0;
  }




  for(int i=0;i<n-1-mx-mx;i++){
    for(int j=i+1;j<n-mx;j++){
      if(s[i] == s[j]){
        ans(i,j,n,record,s,j);
        mx = max(record,mx);
        record = 0;
      }
    }
  }

  cout << mx << endl;

  return 0;
}

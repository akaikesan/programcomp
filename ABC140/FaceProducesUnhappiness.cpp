#include<bits/stdc++.h>
#define rep(i,n) for(int i =0;i < n;i++)
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  string s,tmp;
  cin >> s;
  for(int i = 0;i < n;i++){
    if(s[i] = 'L') tmp [i] = 'R';
    else tmp[i] = 'L';
  }

  int cnt = 1;
  int init = 0;
  int index = 0;

  rep(j,k){
    int mx = 1;
    for(int i = init;i < n-1;i++){
      if(s[i] != s[0] && s[i+1] == s[i]){
        cnt++;
      }
      else {
        if(mx != max(cnt,mx)){
          index = i;
        }
        cnt = 1;
      }
    }
    for(int l = 0;l <= index; l++){
      s[init + 1 + l] = tmp[init + index - l];
    }


    init += mx;

  }

  cout << s << endl;

  return 0;
}

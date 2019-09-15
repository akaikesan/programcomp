#include<bits/stdc++.h>
#define rep(i,n) for(int i =0 ;i <n;i++)
using namespace std;


int main(){
  int n;
  cin >> n;
  set<int> s;

  rep(i,n){
    int j;
    cin >> j;
    s.insert(j);
  }
  cout << s.size() << endl;
  return 0;

}

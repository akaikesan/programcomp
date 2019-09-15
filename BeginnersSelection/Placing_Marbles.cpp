#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  int c = 0;

  for(char e:s){
    if(e == '1') c++;
  }
  cout << c << endl;
  return 0;
}

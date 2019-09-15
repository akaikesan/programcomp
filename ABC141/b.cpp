#include<bits/stdc++.h>

using namespace std;

int main (){
  string s;
  cin >> s;
  for(int i = 0; i< s.length();i++){
    if(i % 2 == 1){
      if (s[i] == 'R') {
        cout << "No" << endl;
        return 0;
      }
    }else{
      if(s[i] == 'L') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

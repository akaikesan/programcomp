#include<bits/stdc++.h>

using namespace std;

string replaceAll(string &replacedStr,string from,string to){
  long long int pos = replacedStr.find(from);
  int toLen = to.length();

  if(from.empty()){
    return replacedStr;
  }

  while ((pos = replacedStr.find(from,pos)) != string::npos){
    replacedStr.replace(pos,from.length(),to);
    pos += toLen;
  }
  return replacedStr;
}

int main(){
  string s;
  cin >> s;

  replaceAll(s,"eraser","");
  replaceAll(s,"erase","");
  replaceAll(s,"dreamer","");
  replaceAll(s,"dream","");

  printf("%s",s == "" ? "YES\n":"NO\n");

  return 0;
}

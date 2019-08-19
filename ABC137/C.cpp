#include<iostream>

#include<vector>

using namespace std;

int combination(int n, int r)
{
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}

int main(){
  string A = "abcdefghijklmnopqrstuvwxyz";
  int n;
  cin >> n;
  vector<string> s(n+1), t(n+1), tmp(n+1);

  for(int i = 1;i <= n;i++) cin >> s[i];

  for(int i = 1;i <= n;i++) t[i] = s[i];

  for(int j = 0;j <26;j++){
    for(int i = 1;i <= n; i++){
      int p = 9;
      while(p >= 0)
      {
        size_t c=s[i].find_first_of(A[j]);
        if(c == string::npos) break;
        s[i].erase(c,1);

        p--;
      }
      if(s[i] == "") tmp.push_back(s[i]);
    }
    if(tmp.size() > 1)
    {
      cout << combination(tmp.size(),2) << endl;
    }
  }
  return 0;
}

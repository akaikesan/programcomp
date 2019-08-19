#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long int> h(n+1);
  h[0] = 0;
  bool flag_p = false;
  for(int i=1;i<=n;i++)
  {
    cin >> h[i];
    if(h[i-1] - h[i] > 1)
    {
      cout << "No" << endl;
      return 0;
    }

    if(h[i-1] - h[i] == 1 && flag_p == true)
    {
      cout << "No" << endl;
      return 0;
    }

    else if(h[i-1] - h[i] == 1 && flag_p == false) flag_p = true;

    else if(h[i-1] - h[i] < 1) flag_p = false;
  }

  cout << "Yes" << endl;
  return 0;

}

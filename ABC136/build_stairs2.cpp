#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n;
  int max = 0;
  cin >> n;

  vector<int> h(n+1);

  for(int i=1;i<=n;i++)
  {
    cin >> h[i];

    if (max - h[i] > 1){
      cout << "No" << endl;
      return 0;
    }
    if(max <= h[i]) max = h[i];

  }

  cout << "Yes" << endl;
  return 0;
}

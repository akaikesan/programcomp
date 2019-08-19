#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int A[5], sp;
  vector<pair<int,int>> diff(5);
  for (int i =0;i < 5;i++)
  {
    cin >> A[i];
  }
  for(int i = 0;i<5;i++)
  {
    sp = A[i] - (A[i]/10)*10;
    diff[i].first = sp;
    if(sp == 0)
    {
      diff[i].second = A[i]/10;
    }
    else
    {
      diff[i].second = A[i]/10 + 1;
    }

  }

  sort(diff.begin(),diff.end());

  int total = 0;


  bool flag = true;

  for (int i = 0;i < 5;i++)
  {
    if(diff[i].first == 0)
    {
      total += diff[i].second * 10;
    }
    else
    {
      if(flag == true)
      {
        total += (diff[i].second-1)*10 + diff[i].first;
        flag = false;
      }
      else{
        total += diff[i].second * 10;
      }
    }

  }


  cout << total;
  return 0;

}

#include<iostream>
#include<vector>

using namespace std;
int main()
{
  int N;
  int T = 0;
  cin >> N;
  vector<pair<int,int>> V(N);

  for(int i=0;i < N;i++)
  {
    cin >> V[i].first;
  }
  for (int i=0;i < N;i++)
  {
    cin >> V[i].second;
  }
  for (int i=0;i<N;i++)
  {
    if (V[i].first - V[i].second > 0)
    {
      T += V[i].first-V[i].second;
    }
  }
  cout << T;
  return 0;



}

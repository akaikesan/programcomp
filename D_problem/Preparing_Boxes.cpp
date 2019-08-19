#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int N;
  int m = 0;
  cin >> N;
  vector<int> v[N+1],w,x;
  for (int i=0;i<N;i++)
  {
    cin >> v[i+1]
  }
  for(int i=N;i>=1;i--)
  {
    for(int j=i+i;j<=N;j+=i)
    {
      m ^= v[j]
    }

    if(i!=1)
    {
      m=0;
    }

  }



  cout << m << endl;

  for(int i = 0; i<N;i++)
  {
    if(x[i] == 1)
    {
      cout << i+1;
    }
  }
  return 0;

}

#include<iostream>

using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;

  int L[N];

  for(int i=0;i<N;i++)
  {
    cin >> L[i];
  }

  int l=0;
  int counter=1;
  for(int i=0;i<N;i++)
  {
    l += L[i];
    if(l > X)
    {
      break;
    }
    else
    {
      counter++;
    }


  }
  cout << counter;
  return 0;
}

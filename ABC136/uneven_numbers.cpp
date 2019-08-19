#include<iostream>

using namespace std;

int order(int n)
{
  int i = 0;
  while(n != 0)
  {
    n /= 10;
    i++;
  }
  return i;
}

int main()
{
  int n;
  int j=0;
  cin >> n;

  for(int i=1;i<=n;i++)
  {
    if(order(i) % 2 == 1)
    {
      j++;
    }
  }
  cout << j << endl;

  return 0;
}

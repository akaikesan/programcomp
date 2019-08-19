#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int N,A;
  cin >> N;

  vector<int> v;

  for (int i = 0;i<N;i++)
  {
    cin >> A;
    v.push_back(A);
  }

  int a = 0;
  int b;
  int num;

  for(int i=0;i<N;i++)
  {
    if (a != max(v[i],a))//更新されるとき
    {
      b = a;
      a = max(v[i],a);
      num = i;
    }
    else if(b < v[i])
    {
      b = v[i];
    }

  }


  for (int i=0;i<N;i++)
  {
    for (int j=0;i<N;i++)
    {
      if(i!=num)
      {
        cout << a << endl;
      }
      else
      {
        cout << b << endl;
      }

    }
  }

  return 0;
}

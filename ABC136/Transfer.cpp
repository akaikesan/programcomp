#include<iostream>
using namespace std;

int main()
{
  int A, B, C, tmp;
  cin >> A >> B >> C;
  tmp = A-B;
  if (C > tmp)
  C = C-tmp;
  else C = 0;
  cout << C << endl;
  return 0;
}

#include<iostream>

using namespace std;

int main()
{
  double A, B;

  cin >> A >> B;

  long int C = (A + B)/2;
  if ((A + B)/2 - C == 0)
  {
    cout << C << endl;
  }else{
    cout << "IMPOSSIBLE" << endl;
  }
  return 0;

}

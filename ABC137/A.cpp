#include<iostream>
using namespace std;
int main(){
  int A, B;
  cin >>A>>B;

  int a = max(A+B,A-B);

  int b = max(a, A * B);

  cout << b << endl;

  return 0;
}

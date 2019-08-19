#include<iostream>

using namespace std;

int main(){
  int k, x;

  cin >> k >> x;

  long int a = x - k + 1;

  int b = x + k - 1;

  for (int i = a;i <= b;i++){
    cout << i << endl;
  }
  return 0;
}

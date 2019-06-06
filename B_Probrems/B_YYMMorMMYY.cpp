#include<iostream>
using namespace std;

int main(){
  int l;
  cin >> l;
  int f = l/100;
  l = l-(l/100)*100;
  if (f==0)
  {
    if(0<l &&l< 13)
    {
      cout << "YYMM";
    }else
    {
      cout << "NA";
    }
    return 0;

  }
  if (l==0)
  {
    if(0< f&&f< 13)
    {
      cout << "MMYY";
    }else
    {
      cout << "NA";
    }
    return 0;

  }
  if(l < 13 && f < 13)
  {
    cout << "AMBIGUOUS";
  }
  else if(l > 12 && f < 13){
    cout << "MMYY";
  }
  else if(f > 12 && l < 13){
      cout << "YYMM";
  }
  else if(f > 12 && l > 12){
    cout << "NA";
  }
  return 0;

}

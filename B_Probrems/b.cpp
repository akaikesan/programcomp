using namespace std;

#include<iostream>



int main()
{
    long int num[100];

    num[0] = 2;
    num[1] = 1;

    int N;

    cin >> N;

    for (int i=2;i<=N;i++)
    {
        num[i] = num[i-1] + num[i-2]; 
    }

    cout << num[N] << endl;

}
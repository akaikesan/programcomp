using namespace std;

using namespace std;

#include<iostream>

int main()
{
    int N;
    cin >> N;

    int num[5];
    for(int i = 0;i<4;i++)
    {
        num[i] = N % 10;
        N /= 10;
    }

    if(num[1] == num[2])
    {
        if(num[1] == num[0] || num[2] == num[3])
        {
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;

}
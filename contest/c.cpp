using namespace std;

#include<iostream>



int main(){

    string str1;
    string str2 = "abcdefghijklmnopqrstuvwxyz";
    cin >> str1;
    int k = 26;

    int num[26];

    for (int i=0;i<26;i++)
    {
        num[i] = 0;
    }

    for(int i=0;i < str1.length();i++)
    {
        for(int j=0;j < 26;j++)
        {
            if(str1[i] == str2[j])
            {
                num[j] = 1;
            }
        }
    }

    for (int k = 0;k < 27;k++)
    {
        if(k == 26)
        {
            cout << "None" << endl;
            return 0;
        }
        if(num[k] == 0)
        {
            cout << str2[k] << endl;
            return 0;
        }
        
    }

    
}
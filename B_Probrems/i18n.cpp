using namespace std;

#include<iostream>

int main(){
    string s;
    cin >> s;
    int c = s.length()-2;
    cout << s[0];
    cout << c;
    cout << s[s.length()-1];
}
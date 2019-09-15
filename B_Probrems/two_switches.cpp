using namespace std;

#include<iostream>



int main(){
    int A, B, C, D, x = 0;
    cin >> A >> B >> C >> D;

    if (A <= C && C <= B && B <= D) {
        x = B - C;
    }
    else if (A <= C && C <= B && D <= B) {
        x = D - C;
    }
    else if(C <= A && A <= D && B <= D){
        x = B - A;   
    }
    else if(C <= A && A <= D && D <= B){
        x = D - A;     
    }
    
    cout << x;
    return 0;
    

}


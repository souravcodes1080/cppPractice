#include<iostream>
using namespace std;

int calcPower(int x, int n){
    if(n == 0) return 1;
    int halfCalc= calcPower(x,n-1);
    int finalCalc= halfCalc*x;
    return finalCalc;
}

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    cout<<calcPower(x,n);
    return 0;
}
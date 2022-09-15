#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0) return 1;
    int calcFact= factorial(n-1);
    return n*calcFact;
    
}

int main(){
    int n;
    cout<<"Enter n number: ";
    cin>> n;
    int fact= factorial(n);
    cout<<"The factorial of "<<n<<" is: "<<fact;
    return 0;
}
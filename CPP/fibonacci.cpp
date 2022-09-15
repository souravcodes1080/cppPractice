#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1) return 1;
    if(n == 2) return 1;
    int fibo1=fibonacci(n-1);
    int fibo2=fibonacci(n-2);   
    int fibo = fibo1+fibo2;
    return fibo;

}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
#include<iostream>

using namespace std;

main()
{
    char ch='a';
    char *chp= &ch;
    cout<<*chp;
    cout<<chp;
    cout<<ch;
}
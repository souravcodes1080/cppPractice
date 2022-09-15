#include<iostream>
using namespace std;

int calcsum(int, int);

main()
{
	int x,y,c;
	cout<<"\nEnter x: ";
	cin>>x;
	cout<<"\nEnter y: ";
	cin>>y;
	c=calcsum(x,y);
	cout<<"\nOutput "<<c;


}

int calcsum(int a, int b)
{
	int c;
	c= a+b;
	return c;
}

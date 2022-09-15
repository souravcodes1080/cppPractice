#include <iostream>
using namespace std;

int sumOfN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int halfSum = sumOfN(n - 1);
    return halfSum + n;
}

int main()
{
    int n;
    cout << "Enter n number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Error";
    }
    else
    {
        cout << "The sum is: " << sumOfN(n);
    }

    return 0;
}
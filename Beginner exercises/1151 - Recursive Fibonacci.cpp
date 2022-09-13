#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int fib;
    cin >> fib;

    for(int i=0; i<fib; i++)
    {
        if(i==fib-1)
        {
            cout << fibonacci(i) << endl;
        }
        else
        {
            cout << fibonacci(i) << " ";
        }
    }
    return 0;
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        if(n==1 || n==2)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
    }
}

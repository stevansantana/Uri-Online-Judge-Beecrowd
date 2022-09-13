#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        unsigned long long int n;
        cin >> n;

        unsigned  long long int fib[n], a=0, b=1, aux=n;

        for(int i=0; i<=n; i++)
        {
            if(i==0 && n==0)
            {
                fib[i]=a;
                cout << "Fib(" << aux << ") = " << fib[i] << endl;
                break;
            }
            if(i==1 && n==1)
            {
                fib[i]=b;
                cout << "Fib(" << aux << ") = " << fib[i] << endl;
                break;
            }

            fib[i]=a;
            if(i==n)
            {
                cout << "Fib(" << aux << ") = " << fib[i] << endl;
                break;
            }
            i++;
            fib[i]=b;
            a+=b;
            b+=a;

            if(i==n)
            {
                cout << "Fib(" << aux << ") = " << fib[i] << endl;
            }
        }
    }
    return 0;
}

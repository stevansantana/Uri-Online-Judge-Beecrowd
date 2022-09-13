#include <iostream>

using namespace std;

int main()
{
    int n, a=0, b=1;
    cin >> n;

    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
        {
            if(i==(n/2-1))
            {
                cout << a << " " << b << endl;
            }
            else
            {
                cout << a << " " << b << " ";
                a+=b;
                b+=a;
            }
        }
    }
    else
    {
        n++;
        for(int i=0; i<n/2; i++)
        {
            if(i==(n/2-1))
            {
                cout << a << endl;
            }
            else
            {
                cout << a << " " << b << " ";
                a+=b;
                b+=a;
            }
        }
    }
    return 0;
}

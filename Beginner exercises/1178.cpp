#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, n[100];
    cin >> x;

    for(int i=0; i<100; i++)
    {
        if(i==0)
        {
            cout << setprecision(4) << fixed;
            cout << "N[" << i << "] = " << x << endl;
            x/=2;
        }
        else
        {
            cout << setprecision(4) << fixed;
            cout << "N[" << i << "] = " << x << endl;
            x/=2;
        }
    }

    return 0;
}

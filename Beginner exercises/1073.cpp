#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n%2==0)
    {
        for(int i=2; i<=n; i+=2)
        {
            cout << setprecision(0) << fixed;
            cout << i << "^2 = " << pow(i, 2) << endl;
        }
    }
    else
    {
        for(int i=2; i<n; i+=2)
        {
            cout << setprecision(0) << fixed;
            cout << i << "^2 = " << pow(i, 2) << endl;
        }
    }
    return 0;
}

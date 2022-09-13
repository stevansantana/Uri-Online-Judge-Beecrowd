#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, a=1;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << setprecision(0) << fixed;
        cout << a << " " << pow(a, 2) << " " << pow(a, 3) << endl;
        cout << a << " " << pow(a, 2)+1 << " " << pow(a, 3)+1 << endl;
        a++;
    }
    return 0;
}

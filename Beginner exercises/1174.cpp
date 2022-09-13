#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a[100];

    for(int i=0; i<100; i++)
    {
        cin >> a[i];

        if(a[i]<=10)
        {
            cout << setprecision(1) << fixed;
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
    return 0;
}

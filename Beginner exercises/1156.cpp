#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s=1, i=3, j=2;

    while(i<=39)
    {
        s+=i/j;
        i+=2;
        j*=2;
    }

    cout << setprecision(2) << fixed;
    cout << s << endl;

    return 0;
}

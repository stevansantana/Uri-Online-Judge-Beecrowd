#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float s=0;

    for(float i=1; i<=100; i++)
    {
        s+=1/i;
    }

    cout << setprecision(2) << fixed;
    cout << s << endl;
    return 0;
}

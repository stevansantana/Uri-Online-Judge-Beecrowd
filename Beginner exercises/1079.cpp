#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        cout << setprecision(1) << fixed;
        cout << (a*2+b*3+c*5)/10 << endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout << setprecision(1) << fixed;
        cout << "Perimetro = " << a+b+c << endl;
    }
    else
    {
        cout << setprecision(1) << fixed;
        cout << "Area = " << ((a+b)*c)/2 << endl;
    }
    return 0;
}

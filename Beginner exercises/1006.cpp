#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c;
    cout << setprecision(1) << fixed;
    cin >> a >> b >> c;

    double media = (a*2 + b*3 + c*5)/10;

    cout << setprecision(1) << fixed;
    cout << "MEDIA = " << media << endl;

    return 0;
}

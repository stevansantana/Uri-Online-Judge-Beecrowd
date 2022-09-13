#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cout << setprecision(1) << fixed;
    cin >> a >> b;

    double media = (a*3.5 + b*7.5)/11;

    cout << setprecision(5) << fixed;
    cout << "MEDIA = " << media << endl;

    return 0;
}

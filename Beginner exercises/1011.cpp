#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159;
    double raio;
    cin >> raio;

    cout << setprecision(3) << fixed;
    cout << "VOLUME = " << (4/3.0)*pi*pow(raio, 3) << endl;
    return 0;
}

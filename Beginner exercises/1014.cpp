#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float y;

    cout << setprecision(1) << fixed;
    cin >> x >> y;

    cout << setprecision(3) << fixed;
    cout << x/y << " km/l" << endl;

    return 0;
}

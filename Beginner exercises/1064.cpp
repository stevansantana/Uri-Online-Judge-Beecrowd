#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, soma=0;
    int aux;

    for(int i=0; i<6; i++)
    {
        cin >> x;
        if(x>0)
        {
            soma+=x;
            aux++;
        }
    }

    cout << aux << " valores positivos" << endl;
    cout << setprecision(1) << fixed;
    cout << soma/aux << endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cod, qtd;
    cin >> cod >> qtd;

    if(cod==1)
    {
        cout << setprecision(2) << fixed;
        cout << "Total: R$ " << qtd*4.00 << endl;
    }
    if(cod==2)
    {
        cout << setprecision(2) << fixed;
        cout << "Total: R$ " << qtd*4.50 << endl;
    }
    if(cod==3)
    {
        cout << setprecision(2) << fixed;
        cout << "Total: R$ " << qtd*5.00 << endl;
    }
    if(cod==4)
    {
        cout << setprecision(2) << fixed;
        cout << "Total: R$ " << qtd*2.00 << endl;
    }
    if(cod==5)
    {
        cout << setprecision(2) << fixed;
        cout << "Total: R$ " << qtd*1.50 << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double valor;
    cout << setprecision(2) << fixed;
    cin >> valor;

    int aux = valor*100;

    int x = aux/100;
    int y = aux%100;

    int notas[6] = {100, 50, 20, 10, 5, 2};

    cout << "NOTAS:" << endl;
    for(int i=0; i<6; i++)
    {
        cout << x/notas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;
        x%=notas[i];
    }

    y = x*100+y;

    int moedas[6] = {100, 50, 25, 10, 5, 1};

    cout << "MOEDAS:" << endl;
    for(int i=0; i<6; i++)
    {
        cout << y/moedas[i] << " moeda(s) de R$ " << moedas[i]/100.0 << endl;
        y%=moedas[i];
    }
    return 0;
}

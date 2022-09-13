#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double salario;
    cout << setprecision(2) << fixed;
    cin >> salario;

    if(salario>=0 && salario<=2000)
    {
        cout << "Isento" << endl;
    }
    if(salario>2000 && salario<=3000)
    {
        salario-=2000;
        salario=(salario*8)/100;
        cout << "R$ " << salario << endl;
    }
    if(salario>3000 && salario<=4500)
    {
        salario-=3000;
        salario=(salario*18)/100;
        cout << "R$ " << salario+80 << endl;
    }
    if(salario>4500)
    {
        salario-=4500;
        salario=(salario*28)/100;
        cout << "R$ " << salario+350 << endl;
    }
    return 0;
}

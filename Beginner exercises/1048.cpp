#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salario;
    cout << setprecision(2) << fixed;
    cin >> salario;

    if(salario>=0 && salario<=400)
    {
        cout << "Novo salario: " << salario+(salario*15/100) << endl;
        cout << "Reajuste ganho: " << salario*15/100 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if(salario>400 && salario<=800)
    {
        cout << "Novo salario: " << salario+(salario*12/100) << endl;
        cout << "Reajuste ganho: " << salario*12/100 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if(salario>800 && salario<=1200)
    {
        cout << "Novo salario: " << salario+(salario*10/100) << endl;
        cout << "Reajuste ganho: " << salario*10/100 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if(salario>1200 && salario<=2000)
    {
        cout << "Novo salario: " << salario+(salario*7/100) << endl;
        cout << "Reajuste ganho: " << salario*7/100 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if(salario>2000)
    {
        cout << "Novo salario: " << salario+(salario*4/100) << endl;
        cout << "Reajuste ganho: " << salario*4/100 << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}

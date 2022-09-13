#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numFuncionario, numHorasTrabalhadas;
    cin >> numFuncionario >> numHorasTrabalhadas;

    double valHora, salario;
    cout << setprecision(2) << fixed;
    cin >> valHora;

    salario=numHorasTrabalhadas*valHora;

    cout << "NUMBER = " << numFuncionario << endl;
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}

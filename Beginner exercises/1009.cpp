#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    double salario, vendas;
    cin >> nome >> salario >> vendas;

    cout << setprecision(2) << fixed;
    cout << "TOTAL = R$ " << salario+vendas*15/100 << endl;
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo1, num1, codigo2, num2;
    float valor1, valor2;

    cin >> codigo1 >> num1 >> valor1;
    cin >> codigo2 >> num2 >> valor2;

    float total = num1*valor1 + num2*valor2;

    cout << setprecision(2) << fixed;
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float idade, soma=0, cont=0;
    cin >> idade;

    while(idade>0)
    {
        soma+=idade;
        cont++;

        cin >> idade;
    }

    cout << setprecision(2) << fixed;
    cout << soma/cont << endl;
    return 0;
}

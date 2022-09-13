#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota1, nota2;
    cin >> nota1;

    while(nota1<0 || nota1>10)
    {
        cout << "nota invalida" <<  endl;
        cin >> nota1;
    }

    cin >> nota2;

    while(nota2<0 || nota2>10)
    {
        cout << "nota invalida" << endl;
        cin >> nota2;
    }

    cout << setprecision(2) << fixed;
    cout << "media = " << (nota1+nota2)/2 << endl;
    return 0;
}

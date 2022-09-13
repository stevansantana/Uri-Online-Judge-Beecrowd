#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    do
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

        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> x;

        while(x<1 || x>2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> x;
        }
        if(x==2)
        {
            break;
        }
    }while(x==1);

    return 0;
}

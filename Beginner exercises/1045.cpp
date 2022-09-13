#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, aux;
    cin >> a >> b >> c;

    if(a<b)
    {
        aux=a;
        a=b;
        b=aux;;
    }
    if(a<c)
    {
        aux=a;
        a=c;
        c=aux;
    }

    if(a>=b+c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if(pow(a, 2) == pow(b, 2) + pow(c, 2))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if(pow(a, 2) > pow(b, 2)+ pow(c, 2))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if(pow(a, 2) < pow(b, 2)+ pow(c, 2))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a==b && b==c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if(a==b && b!=c)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    if(a==c && c!=b)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    if(b==c && b!=a)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}

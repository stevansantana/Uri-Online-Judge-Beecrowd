#include <iostream>

using namespace std;

int main()
{
    int tempo;
    cin >> tempo;

    int horas = tempo/3600;
    tempo%=3600 ;

    int minutos = tempo/60;
    tempo%=60;

    cout << horas << ":" << minutos << ":" << tempo << endl;
    return 0;
}

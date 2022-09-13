#include <iostream>

using namespace std;

int main()
{
    int dia1, hora1, minuto1, segundo1;
    int dia2, hora2, minuto2, segundo2;
    string x;

    cin >> x >> dia1 >> hora1 >> x >> minuto1 >> x >> segundo1;
    cin >> x >> dia2 >> hora2 >> x >> minuto2 >> x >> segundo2;

    int q1 = segundo1 + minuto1*60 + hora1*60*60 + dia1*60*60*24;
    int q2 = segundo2 + minuto2*60 + hora2*60*60 + dia2*60*60*24;

    int tempo = q2-q1;

    cout << tempo/(60*60*24) << " dia(s)" << endl;
    tempo%=(60*60*24);
    cout << tempo/(60*60) << " hora(s)" << endl;
    tempo%=(60*60);
    cout << tempo/60 << " minuto(s)" << endl;
    tempo%=60;
    cout << tempo << " segundo(s)" << endl;

    return 0;
}

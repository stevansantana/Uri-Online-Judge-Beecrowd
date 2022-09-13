#include <iostream>

using namespace std;

int main()
{
    int inicio, fim;
    cin >> inicio >> fim;

    if(inicio==fim)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    if(inicio<fim)
    {
        cout << "O JOGO DUROU " << fim-inicio << " HORA(S)" << endl;
    }
    if(inicio>fim)
    {
        cout << "O JOGO DUROU " << (fim+24)-inicio << " HORA(S)" << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    if(hora_inicial<hora_final)
    {
        if(minuto_inicial<minuto_final)
        {
            cout << "O JOGO DUROU " << hora_final-hora_inicial << " HORA(S) E " << minuto_final-minuto_inicial << " MINUTO(S)" << endl;
        }
        else
        {
            if(minuto_inicial>minuto_final)
            {
                cout << "O JOGO DUROU " << hora_final-hora_inicial-1 << " HORA(S) E " << (minuto_final+60)-minuto_inicial << " MINUTO(S)" << endl;
            }
            else
            {
                cout << "O JOGO DUROU " << hora_final-hora_inicial << " HORA(S) E 0 MINUTO(S)" << endl;
            }
        }
    }
    else
    {

        if(hora_inicial>hora_final)
        {
            if(minuto_inicial<minuto_final)
            {
                cout << "O JOGO DUROU " << (hora_final+24)-hora_inicial << " HORA(S) E " << minuto_final-minuto_inicial << " MINUTOS(S)" << endl;
            }
            else
            {
                if(minuto_inicial>minuto_final)
                {
                    cout << "O JOGO DUROU " << (hora_final+24)-hora_inicial-1 << " HORA(S) E " << (minuto_final+60)-minuto_inicial << " MINUTO(S)" << endl;
                }
                else
                {
                    cout << "O JOGO DUROU " << (hora_final+24)-hora_inicial << " HORA(S) E 0 MINUTO(S)" << endl;
                }
            }
        }
        else
        {
            if(minuto_inicial<minuto_final)
            {
                cout << "O JOGO DUROU 0 HORA(S) E " << minuto_final-minuto_inicial << " MINUTO(S)" << endl;
            }
            else
            {
                if(minuto_inicial>minuto_final)
                {
                    cout << "O JOGO DUROU 23 HORA(S) E " << (minuto_final+60)-minuto_inicial << " MINUTO(S)" << endl;
                }
                else
                {
                    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
                }
            }
        }
    }
    return 0;
}

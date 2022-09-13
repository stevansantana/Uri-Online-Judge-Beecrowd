#include <iostream>

using namespace std;

int main()
{
    int x, inter, gremio, grenais=1, aux_inter=0, aux_gremio=0, empate=0;

    do
    {
        cin >> inter >> gremio;

        if(inter>gremio)
        {
            aux_inter++;
        }
        else
        {
            if(inter<gremio)
            {
                aux_gremio++;
            }
            else
            {
                empate++;
            }
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> x;

        while(x<1 || x>2)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> x;
        }

        if(x==1)
        {
            grenais++;
        }
        else
        {
            break;
        }

    }while(x==1);

    if(grenais==1)
    {
        cout << grenais << " grenal" << endl;
    }
    else
    {
        cout << grenais << " grenais" << endl;
    }
    cout << "Inter:" << aux_inter << endl;
    cout << "Gremio:" << aux_gremio << endl;
    cout << "Empates:" << empate << endl;

    if(aux_inter>aux_gremio)
    {
        cout << "Inter venceu mais" << endl;
    }
    else
    {
        if(aux_inter<aux_gremio)
        {
            cout << "Gremio venceu mais" << endl;
        }
        else
        {
            cout << "Nao houve vencedor" << endl;
        }
    }
    return 0;
}

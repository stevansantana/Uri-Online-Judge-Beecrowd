#include <iostream>

using namespace std;

int main()
{
    int x, par[5], impar[5], indice_par=0, indice_impar=0;

    for(int i=0; i<15; i++)
    {
        cin >> x;

        if(x%2==0)
        {
            par[indice_par]=x;
            indice_par++;

            if(indice_par==5)
            {
                for(int i=0; i<indice_par; i++)
                {
                    cout << "par[" << i << "] = " << par[i] << endl;
                }
                indice_par=0;
            }
        }
        else
        {
            impar[indice_impar]=x;
            indice_impar++;

            if(indice_impar==5)
            {
                for(int i=0; i<indice_impar; i++)
                {
                    cout << "impar[" << i << "] = " << impar[i] << endl;
                }
                indice_impar=0;
            }
        }
    }

    for(int i=0; i<indice_impar; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for(int i=0; i<indice_par; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}

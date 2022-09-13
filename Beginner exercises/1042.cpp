#include <iostream>

using namespace std;

int main()
{
    int x, lista[3], aux[3];

    for(int i=0; i<3; i++)
    {
        cin >> x;
        lista[i]=x;
        aux[i]=x;
    }
    for(int i=0; i<2; i++)
    {
        for(int j=1; j<3; j++)
        {
            if(lista[i]>lista[j])
            {
                int aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        cout << lista[i] << endl;
    }
    cout << endl;
    for(int i=0; i<3; i++)
    {
        cout << aux[i] << endl;
    }
    return 0;
}

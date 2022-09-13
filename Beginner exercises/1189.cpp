#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char c;
    cin >> c;

    double matriz[12][12], soma=0, cont=0;
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            cin >> matriz[i][j];
        }
    }

    switch(c)
    {
    case 'S':
        {
            int aux1=1, aux2=10;
            for(int i=0; i<5; i++)
            {
                for(int j=aux1; j<=aux2; j++)
                {
                    soma+=matriz[j][i];
                }
                aux1++;
                aux2--;
            }
            cout << setprecision(1) << fixed;
            cout << soma << endl;
            break;
        }
    case 'M':
        {
            int aux1=1, aux2=10;
            for(int i=0; i<5; i++)
            {
                for(int j=aux1; j<=aux2; j++)
                {
                    soma+=matriz[j][i];
                    cont++;
                }
                aux1++;
                aux2--;
            }
            cout << setprecision(1) << fixed;
            cout << soma/cont << endl;
            break;
        }
    }
    return 0;
}

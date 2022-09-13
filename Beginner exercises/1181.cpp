#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int l;
    cin >> l;

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
            for(int i=0; i<12; i++)
            {
                soma+=matriz[l][i];
            }

            cout << setprecision(1) << fixed;
            cout << soma << endl;
            break;
        }
    case 'M':
        {
            for(int i=0; i<12; i++)
            {
                soma+=matriz[l][i];
                cont++;
            }

            cout << setprecision(1) << fixed;
            cout << soma/cont << endl;
            break;
        }
    }
    return 0;
}

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
            for(int i=0; i<11; i++)
            {
                for(int j=i+1; j<12; j++)
                {
                    soma+=matriz[i][j];
                }
            }
            cout << setprecision(1) << fixed;
            cout << soma/cont << endl;
            break;
        }
    case 'M':
        {
            for(int i=0; i<11; i++)
            {
                for(int j=i+1; j<12; j++)
                {
                    soma+=matriz[i][j];
                    cont++;
                }
            }
            cout << setprecision(1) << fixed;
            cout << soma/cont << endl;
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char cobaia;
    double total=0;
    int n, qtd, coelho=0, sapo=0, rato=0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> qtd >> cobaia;

        total+=qtd;
        switch(cobaia)
        {
        case 'C':
            {
                coelho+=qtd;
                break;
            }
        case 'R':
            {
                rato+=qtd;
                break;
            }
        case 'S':
            {
                sapo+=qtd;
                break;
            }
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;

    cout << setprecision(2) << fixed;
    cout << "Percentual de coelhos: " << (coelho*100)/total << " %" << endl;
    cout << "Percentual de ratos: " << (rato*100)/total << " %" << endl;
    cout << "Percentual de sapos: " << (sapo*100)/total << " %" << endl;
    return 0;
}

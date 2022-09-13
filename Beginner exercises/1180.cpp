#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n];
    cin >> x[0];

    int menor=x[0], posicao;

    for(int i=1; i<n; i++)
    {
        cin >> x[i];

        if(menor>x[i])
        {
            menor=x[i];
            posicao=i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}

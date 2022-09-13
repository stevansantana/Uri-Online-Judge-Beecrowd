#include <iostream>

using namespace std;

int main()
{
    int valor;
    cin >> valor;

    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};

    cout << valor << endl;
    for(int i=0; i<7; i++)
    {
        cout << valor/cedulas[i] << " nota(s) de R$ " << cedulas[i] << ",00" << endl;
        valor%=cedulas[i];
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int vet[10];
    for(int i=0; i<10; i++)
    {
        vet[i]=x;
        x*=2;

        cout << "N[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}

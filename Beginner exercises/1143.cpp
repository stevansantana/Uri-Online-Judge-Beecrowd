#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, aux=1;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << aux << " " << pow(aux, 2) << " " << pow(aux, 3) << endl;
        aux++;
    }
    return 0;
}

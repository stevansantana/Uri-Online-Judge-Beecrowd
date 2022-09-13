#include <iostream>

using namespace std;

int main()
{
    int n, aux=1;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << aux++ << " ";
        cout << aux++ << " ";
        cout << aux << " ";
        cout << "PUM" << endl;
        aux+=2;
    }
    return 0;
}

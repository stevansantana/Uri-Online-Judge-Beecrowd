#include <iostream>

using namespace std;

int main()
{
    int n[20], aux=0;

    for(int i=0; i<20; i++)
    {
        cin >> n[i];
    }

    for(int i=19; i>=0; i--)
    {
        cout << "N[" << aux << "] = " << n[i] << endl;
        aux++;
    }
    return 0;
}

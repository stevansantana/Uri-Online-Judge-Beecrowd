#include <iostream>

using namespace std;

int main()
{
    int x, aux=0;
    for(int i=0; i<5; i++)
    {
        cin >> x;

        if(x%2==0)
        {
            aux++;
        }
    }

    cout << aux << " valores pares" << endl;
    return 0;
}

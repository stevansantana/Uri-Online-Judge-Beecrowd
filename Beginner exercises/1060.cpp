#include <iostream>

using namespace std;

int main()
{
    float x;
    int aux=0;

    for(int i=0; i<6; i++)
    {
        cin >> x;
        if(x>0)
        {
            aux++;
        }
    }
    cout << aux << " valores positivos" << endl;
    return 0;
}

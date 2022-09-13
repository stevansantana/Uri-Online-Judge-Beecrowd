#include <iostream>

using namespace std;

int main()
{
    int t, j=0, n[1000];
    cin >> t;

    for(int i=0; i<1000; i++)
    {
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if(t==j)
            j=0;
    }
    return 0;
}

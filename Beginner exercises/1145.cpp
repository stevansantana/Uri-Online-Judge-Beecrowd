#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for(int i=1; i<=y; i++)
    {
        for(int j=1; j<=x; j++)
        {
            if(j==x)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
                i++;
            }
        }
    }
    return 0;
}

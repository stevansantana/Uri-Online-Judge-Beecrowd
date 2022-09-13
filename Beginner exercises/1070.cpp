#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for(int i=0; i<6; i++)
    {
        if(x%2==0)
        {
            x++;
            cout << x << endl;
            x+=2;
        }
        else
        {
            cout << x << endl;
            x+=2;
        }
    }
    return 0;
}

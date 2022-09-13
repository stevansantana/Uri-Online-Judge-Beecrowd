#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x, y, soma=0;
        cin >> x >> y;

        if(x%2!=0)
        {
            for(int j=0; j<y; j++)
            {
                soma+=x;
                x+=2;
            }
            cout << soma << endl;
        }
        else
        {
            x++;
            for(int j=0; j<y; j++)
            {
                soma+=x;
                x+=2;
            }
            cout << soma << endl;
        }
    }
    return 0;
}

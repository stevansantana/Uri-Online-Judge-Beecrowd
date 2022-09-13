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

        if(x<y)
        {
            if(x%2==0)
            {
                x++;
                for(int i=x; i<y; i+=2)
                {
                    soma+=i;
                }
                cout << soma << endl;
            }
            else
            {
                x+=2;
                for(int i=x; i<y; i+=2)
                {
                    soma+=i;
                }
                cout << soma << endl;
            }
        }
        else
        {
            if(x>y)
            {
                if(x%2==0)
                {
                    x--;
                    for(int i=x; i>y; i-=2)
                    {
                        soma+=i;
                    }
                    cout << soma << endl;
                }
                else
                {
                    x-=2;
                    for(int i=x; i>y; i-=2)
                    {
                        soma+=i;
                    }
                    cout << soma << endl;
                }
            }
            else
            {
                cout << soma << endl;
            }
        }
    }
    return 0;
}

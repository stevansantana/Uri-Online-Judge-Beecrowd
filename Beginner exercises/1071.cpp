#include <iostream>

using namespace std;

int main()
{
    int x, y, soma=0;
    cin >> x >> y;

    if(x>y)
    {
        if(x%2==0)
        {
            x--;
            for(int i=x; i>y; i-=2)
            {
                soma+=i;
            }
        }
        else
        {
            x-=2;
            for(int i=x; i>y; i-=2)
            {
                soma+=i;
            }
        }
    }
    else
    {
        if(x<y)
        {
            if(x%2==0)
            {
                x++;
                for(int i=x; i<y; i+=2)
                {
                    soma+=i;
                }
            }
            else
            {
                x+=2;
                for(int i=x; i<y; i+=2)
                {
                    soma+=i;
                }
            }
        }
    }

    cout << soma << endl;
    return 0;
}

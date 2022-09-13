#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x!=0)
    {
        int soma=0;

        if(x%2==0)
        {
            for(int i=0; i<5; i++)
            {
                soma+=x;
                x+=2;
            }
            cout << soma << endl;
        }
        else
        {
            x++;
            for(int i=0; i<5; i++)
            {
                soma+=x;
                x+=2;
            }
            cout << soma << endl;
        }

        cin >> x;
    }
    return 0;
}

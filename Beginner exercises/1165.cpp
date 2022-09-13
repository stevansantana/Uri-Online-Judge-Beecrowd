#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x, cont=0;
        cin >> x;

        for(int j=1; j<=x; j++)
        {
            if(x%j==0)
            {
                cont++;
            }
        }
        if(cont==2)
        {
            cout << x << " eh primo" << endl;
        }
        else
        {
            cout << x << " nao eh primo" << endl;
        }
    }
    return 0;
}

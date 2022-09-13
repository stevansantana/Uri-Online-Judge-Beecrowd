#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    while(m>0 && n>0)
    {
        int soma=0;

        if(m<n)
        {
            for(int i=m; i<=n; i++)
            {
                cout << i << " ";
                soma+=i;
            }
            cout << "Sum=" << soma << endl;
        }
        else
        {
            for(int i=n; i<=m; i++)
            {
                cout << i << " ";
                soma+=i;
            }
            cout << "Sum=" << soma << endl;
        }

        cin >> m >> n;
    }
    return 0;
}

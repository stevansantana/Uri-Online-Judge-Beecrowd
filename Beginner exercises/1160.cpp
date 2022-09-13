#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        int pa, pb, tempo=0;
        cin >> pa >> pb;

        double g1, g2;
        cout << setprecision(1) << fixed;
        cin >> g1 >> g2;

        while(pa<=pb)
        {
            pa+=pa*g1/100;
            pb+=pb*g2/100;
            tempo++;

            if(tempo>100)
            {
                break;
            }
        }
        if(tempo>100)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << tempo << " anos." << endl;
        }
    }

    return 0;
}

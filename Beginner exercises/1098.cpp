#include <iostream>

using namespace std;

int main()
{
    float x=0, y=0;

    while(x<=2.2)
    {
        for(int i=1; i<=3; i++)
        {
            cout << "I=" << x << " J=" << i+y << endl;
        }
        x+=0.2;
        y+=0.2;
    }
    return 0;
}

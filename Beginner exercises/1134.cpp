#include <iostream>

using namespace std;

int main()
{
    int cod, gasolina=0, alcool=0, diesel=0;
    cin >> cod;

    while(cod<1 || cod>4)
    {
        cin >> cod;
    }

    while(cod!=4)
    {
        switch(cod)
        {
        case 1:
            {
                alcool++;
                break;
            }
        case 2:
            {
                gasolina++;
                break;
            }
        case 3:
            {
                diesel++;
                break;
            }
        }

        cin >> cod;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n1, n2, n3, n4;
    cout << setprecision(1) << fixed;
    cin >> n1 >> n2 >> n3 >> n4;

    double media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << "Media: " << media << endl;
    if(media>=7)
    {
        cout << "Aluno aprovado." << endl;
    }
    if(media<5)
    {
        cout << "Aluno reprovado." << endl;
    }
    if(media>=5 && media<7)
    {
        cout << "Aluno em exame." << endl;

        double exame;
        cout << setprecision(1) << fixed;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;

        double nova_media = (exame+media)/2;

        if(nova_media>=5)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << nova_media << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << nova_media << endl;
        }
    }
    return 0;
}

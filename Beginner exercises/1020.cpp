#include <iostream>

using namespace std;

int main()
{
    int idade;
    cin >> idade;

    int ano = idade/365;
    idade%=365;

    int mes = idade/30;
    idade%=30;

    cout << ano << " ano(s)\n" << mes << " mes(es)\n" << idade << " dia(s)" << endl;
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tempo, velocidade;
    cin >> tempo >> velocidade;

    float distancia = tempo*velocidade;

    cout << setprecision(3) << fixed;
    cout << distancia/12 << endl;

    return 0;
}

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, limite;

    cout << "Digite um n?mero para ser multiplicado: ";
    cin >> numero;

    cout << "Digite o limite da multiplica??o: ";
    cin >> limite;

    for(int i = 1; i <= limite; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}


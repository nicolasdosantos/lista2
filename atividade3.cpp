#include <iostream>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
	setlocale(LC_ALL,"Portuguese");
    int n;
    
    cout << "Digite um numero inteiro: ";
    cin >> n;
    
    cout << "Os numeros primos menores ou iguais a " << n << " são: " << endl;

    for (int i = 2; i <= n; i++) {
        if (ehPrimo(i)) {
            cout << i << endl;
        }
    }
    
    return 0;
}


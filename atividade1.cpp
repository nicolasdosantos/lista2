#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int n;
    
    cout << "Digite um n�mero inteiro: ";
    cin >> n;
    
    cout << "Os divisores de " << n << " s�o:" << endl;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}
	


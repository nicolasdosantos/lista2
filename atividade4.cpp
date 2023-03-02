#include <iostream>
using namespace std;

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
	setlocale (LC_ALL,"Portuguese");
    int num1, num2;
    
    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;
    
    cout << "O maior número é " << maior(num1, num2) << endl;
    
    return 0;
}



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
    
    cout << "Digite dois n�meros inteiros: ";
    cin >> num1 >> num2;
    
    cout << "O maior n�mero � " << maior(num1, num2) << endl;
    
    return 0;
}



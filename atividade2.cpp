#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int user, soma, casa =1, digitos;
	
	cout << "Insira seu numero";
	cin >> user;
	
	while ( soma< casa){
		digitos = (user/casa)%10;
		soma +=digitos;
		casa *=10;
	}
	
	cout << " A soma dps digitos é: "<<soma;
	
}

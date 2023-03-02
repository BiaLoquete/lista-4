#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char c;

    cout << "Digite um caractere: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "O caractere digitado é uma letra minúscula.\n";
    } else if (c >= 'A' && c <= 'Z') {
        cout << "O caractere digitado é uma letra maiúscula.\n";
    } else if (c >= '0' && c <= '9') {
        cout << "O caractere digitado é um número.\n";
    } else {
        cout << "O caractere digitado não é uma letra nem um número.\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char c;

    cout << "Digite um caractere: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "O caractere digitado � uma letra min�scula.\n";
    } else if (c >= 'A' && c <= 'Z') {
        cout << "O caractere digitado � uma letra mai�scula.\n";
    } else if (c >= '0' && c <= '9') {
        cout << "O caractere digitado � um n�mero.\n";
    } else {
        cout << "O caractere digitado n�o � uma letra nem um n�mero.\n";
    }

    return 0;
}

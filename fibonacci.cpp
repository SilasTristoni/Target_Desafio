#include <iostream>
using namespace std;
int numero, a=0, b=1;
main() {
	system("chcp 65001");
    int numero;
    cout << "Informe um número para verificar se pertence à sequência de Fibonacci: ";
    cin >> numero;
    if (numero == a || numero == b) {
        cout << numero << " pertence à sequência de Fibonacci." << endl;
        return 0;
    }
	while (b < numero) {
        int temp = a;
        a = b;
        b = temp + b;
    }

    // Verifica se o número informado está na sequência
    if (b == numero) {
        cout << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << numero << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
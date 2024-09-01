/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência 
ou pode ser previamente definida no código;*/

#include <iostream>
#include <string>
using namespace std;
string frase="paralelepipedo"; 
int contador=0;
main(){
	system("chcp 65001");
	cout<<"\n\nPrograma de verificação da letra a";
	cout<<"\n======================================";
	for (char c : frase) {
        if (c == 'a') {
            cout << "\n\nEssa palavra possui a letra 'a'\n";
            contador++;
        }
    }
    cout<<"\n======================================";
	cout<<"\n\nO número de vezes que a letra <a> apareceu na frase foi: "<<contador;
}
/*3) Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; 
enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?*/


#include <iostream>
using namespace std;
int indice = 12, soma = 0, k = 1;
main(){
	//condição de soma de k enquanto ele for menor que 13
	while(k<indice){
		k = k+1;
		soma = soma +k;
		cout<<"\n"<<soma;
	}
}
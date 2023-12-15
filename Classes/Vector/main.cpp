#include<iostream>
#include "vetor.h"


int main(){
    
    CVetor teste;
    CVetor galgo;
    cout << "Digite os valores para o Cvetor teste: ";
    cin >> teste;
    cout << "Digita aí pro galgo: ";
    cin >> galgo;
    teste.Atribui(4, 56);
    cout << teste;
    cout << galgo;
    cout << endl;

    cout << "Primeiro e último: "<< teste.Primeiro() << ", " << teste.Ultimo() << endl;
    cout << "Maior: " << teste.Maximo() << endl;

    teste[1] = galgo[1];
    cout << "Posição requerida de 'galgo' :" << galgo.Conteudo(1) << endl;
    cout << "\nTeste modificado: "<< teste;
}
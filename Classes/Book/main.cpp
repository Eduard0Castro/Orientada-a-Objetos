#include <iostream>
#include"book.h"

int main(){

    Book galgo("As Ilhas da Corrente", "Ernest Hemingway", "Bertrand Brasil", "Romance");
    Book unknown;

    cout << galgo;
    cout << unknown;

    cout << "\nDigite atributos para o livro 'unknown': \n";
    cin >> unknown;

    cout << unknown;


}
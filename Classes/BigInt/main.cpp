#include <iostream>
#include "bigint.h"

using namespace std;

int main(){

    BigInt n;
    BigInt h;
    BigInt Result;

    cout << "Digite o valor do inteiro h: ";
    cin >> h;

    cout << "'h' é um palíndromo?\n";
    cout << h.palindromo() << endl;
    // cout << "Digite o valor da inteiro n: " << "\n";
    // cin >> n;

    // Result = h + n;
    // cout << "Soma: "<< Result << "\n";

    // Result = h - n;

    // cout << "Subtração: "<< Result << "\n";


    // cout << "'N' é maior que 'h'? " << (n > h) << "\n";
    // cout << "'h' é menor que 'n'? " << (h < n) << "\n";
    // cout << "'N' é igual a 'h'? " << (n == h) << "\n";
    // cout << "'n' é diferente de 'h'? " << (n != h) << "\n";
    // cout << "'N' é menor ou igual a 'h'? " << (n <= h) << "\n";
    // cout << "'h' é maior ou igual a 'n'? " << (h >= n) << "\n";



}
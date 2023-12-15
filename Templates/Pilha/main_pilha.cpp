#include <iostream>
#include <cstdlib>
#include "Pilha.h"


int main(){

   

    Pilha<float> pilhaf;
    Pilha<int> pilhaint;
    Pilha<char> pilhach;

    cout << "Entre com valores na pilha de inteiros: " << endl;
    cin >> pilhaint; 
    cout << pilhaint;

    cout << "Entre com valores na pilha de floats: " << endl;
    cin >> pilhaf;
    cout << pilhaf;

    cout << "Entre com valores na pilha de char: " << endl;
    cin >> pilhach;
    cout << pilhach;


    return 0;
}
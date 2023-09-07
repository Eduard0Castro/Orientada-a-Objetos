#include <iostream>
#include "complexo.h"

using namespace std;

int main(){

    Complexo ossa(8, 9);
    Complexo que(6, 7);
    Complexo daora;
    
    cout << "Printando 'ossa': \n";
    ossa.print();
    
    cout << "\n";

    cout << "Printando 'que': \n";
    que.print();
    
    //Soma:
    cout << "\n";
    ossa.Soma(que);
    
    //Subtração:
    cout << "\n";
    cout << "Subtração: \n";
    daora = ossa.Sub(que);
    daora.print();

    //Multiplicação:
    cout << "\n";
    cout << "Multiplicação: \n";
    daora = ossa.Mult(que);
    daora.print();

    //Divisão: 
    cout << "\n";
    cout << "Divisão: \n";
    daora = ossa.Div(que);
    daora.print();

    //Módulo:
    cout << "\n";
    cout << ossa.modulo();

    //Quantidade de objetos:
    cout << "\n";
    cout << ossa.how_many();
    
    cout << "\n";

    return 0;
}

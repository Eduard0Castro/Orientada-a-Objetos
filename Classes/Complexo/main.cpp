#include <iostream>
#include "complexo.h"

using namespace std;

int main(){

    Complexo ossa(8, 9);
    Complexo que(6, 7);
    Complexo daora;
    Complexo inter1(0,0);
    Complexo inter2;
  
    cout << !inter1 << "\n";
    cout << !ossa << "\n";
    inter1.operator++();
    inter1.print();
    inter2 = ++inter1;// inter1++;inter2 = inter1 => Pŕe incremento
    inter2.print();

    cout << "Printando 'ossa': \n";
    ossa.print();
    
    cout << "\n";

    cout << "Printando 'que': \n";
    que.print();


    //Quantidade de objetos:
    cout << "\n";
    cout << "Quantidade de objetos instanciados: \n";
    cout << ossa.how_many();
    
    cout << "\n";
    
    //Soma:
    cout << "\n";
    ossa.Soma(que);

    inter1 = ossa + que;
    cout << "Soma com sobrecarga de operadores\n";
    inter1.print();
    
    //Subtração:
    cout << "\n";
    cout << "Subtração: \n";
    daora = ossa.Sub(que);
    daora.print();

    inter2 = ossa - que;
    cout << "Subtração com sobrecarga de operadores\n";
    inter2.print();

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
    cout << ossa.modulo() << "\n";


    return 0;

}

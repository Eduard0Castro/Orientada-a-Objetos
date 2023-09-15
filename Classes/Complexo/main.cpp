#include <iostream>
#include "complexo.h"

using namespace std;

//Protótipos de funções:
void teste_friend(Complexo);
ostream& operator >> (ostream&, Complexo&);
istream& operator << (istream&, Complexo&);


int main(){

    Complexo ossa(8, 9);
    Complexo que(6, 7);
    Complexo daora;
    Complexo inter1(0,0);
    Complexo inter2;
  
    //Operadores unários:
    cout << !inter1 << "\n";
    cout << !ossa << "\n";
    inter1++;
    inter1.print();
    inter2 = ++inter1;// inter1++;inter2 = inter1 => Pŕe incremento
    inter2.print();

    inter2 = ossa++; //Pós incremento: inter2 = ossa; e depois ossa++;
    inter2.print();
    ossa.print();

    cout << "\n";
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
    cout << "Subtração com sobrecarga de operadores: inter2: \n";
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


    //Implementa função friend:
    teste_friend(inter2);

    //Teste para impressão e conversão de Complexos:
    cout << "Entre com os valores para um numero complexo: ";
    cin >> inter1;
    cout << "\n" << inter1;
    cout << "\n" << (int)inter1 << endl; //Conversão explícita
    
    int oi = inter2; //Conversão implícita
    cout << oi<<"\n";
    
    return 0;

}

//Implementação da função friend:
void teste_friend(Complexo n){
    double o = n.real;
    cout << o << endl;

}

ostream& operator << (ostream& out, Complexo& n){
    out << n.real << " +" << n.img << "i\n";
    return out;
}
istream& operator >> (istream& in, Complexo& n){
    in >> n.real >> n.img;
    return in;
}
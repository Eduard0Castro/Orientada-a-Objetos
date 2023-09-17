#include <iostream>
#include "complexo.h"

using namespace std;

//Protótipos de funções:
void teste_friend(Complexo);
ostream& operator >> (ostream&, Complexo&);
istream& operator << (istream&, Complexo&);


int main(){

    Complexo ossa(0, 0);
    Complexo que(2, 3);
    Complexo daora(5, 8);
    Complexo inter(0, 0);

    //Prints:
    cout <<"ossa: "<< ossa;
    cout << "que: " << que;
    cout << "daora: " << daora;
    cout << "inter: " << inter  << "\n";

    //Comparações:
    cout << "'Ossa' é maior que 'daora'? " << (ossa > daora) << "\n";
    cout << "'que' é menor que 'daora'? " << (que < daora) << "\n";
    cout << "'Inter' é igual a 'ossa'? " << (inter == ossa) << "\n";
    cout << "'Daora' é diferente de 'inter'? " << (daora != inter) << "\n";
    cout << "'Ossa' é menor ou igual a 'que'? " << (ossa <= que) << "\n";
    cout << "'Daora' é maior ou igual a 'que'? " << (daora >= que) << "\n";

    cout << "\n";



    cout << "Entre com valores para o complexo inter: ";
    cin >> inter;
    cout << "\n";

    //Soma
    daora = inter + ossa;
    cout << "Soma de inter com 'ossa': " << daora << "\n";

    //Subtração
    daora = inter - que;
    cout << "Subtração de inter com 'que': " << daora << "\n";

    //Multiplicação
    daora = inter * daora;
    cout << "Multiplicação de inter com 'daora'" << daora << "\n";

    //Divisão
    daora = inter/(++ossa);
    cout << "Divisão de inter por 'ossa incrementado: '" << daora  << "\n";
    
    return 0;

}

//Implementação das funções friend:
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
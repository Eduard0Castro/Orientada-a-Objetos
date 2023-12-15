#include <iostream>
#include "Fracao.h"
#include "../Complexo/complexo.h"

using namespace std;

ostream& operator << (ostream&, Complexo&);
istream& operator >> (istream&, Complexo&);
int main(){

    CFracao a (1, 3);
    CFracao b (2, 6);
    CFracao c (4, 5);
    CFracao d (5, 3);
    CFracao oper(1, 1);
    Complexo comp(4, 5);

    //Prints:
    cout <<"a: "<< a << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n";
    cout << "d: " << d << "\n";

    //Comparações:
    cout << "'A' é maior que 'c'? " << (a > c) << "\n";
    cout << "'b' é menor que 'c'? " << (b < c) << "\n";
    cout << "'A' é igual a 'b'? " << (a == b) << "\n";
    cout << "'C' é diferente de 'd'? " << (c != d) << "\n";
    cout << "'A' é menor ou igual a 'b'? " << (a <= b) << "\n";
    cout << "'C' é maior ou igual a 'b'? " << (c >= b) << "\n";

    //Entrar com valor de d:
    cout << "Entre com o valor de d: ";
    cin >> d;

    cout << "\n";

    //Soma:
    oper = a + b;
    cout << "Soma de a com b: " << oper << "\n";

    //Subtração:
    oper = d - a;
    cout << "Subtração de d e a : " << oper << "\n";

    //Multiplicão:
    oper = a * c;
    cout << "Multiplicação de a e c: " << oper << "\n";

    //Divisão:
    oper = a / d;
    cout << "Divisão de a por d: " << oper << "\n";

    cout << "\nConversão do Complexo 'comp' para float: \n";
    cout << (float)comp << "\n";

    cout << "\nConversão do Complexo 'comp' para inteiro: \n";
    cout << (int)comp << "\n";

    cout << "\nConversão do CFracao 'd' para float: \n";
    cout << (float)d << "\n";
    
    cout << "\nConversão do CFracao 'd' para inteiro: \n";
    cout << (int)d << "\n";

    cout << "\nConversão do CFracao 'd' para complexo: \n";
    Complexo inter = (Complexo)d;
    cout << inter << "\n";


    return 0;
}

ostream& operator << (ostream& out, Complexo& n){
    out << n.real << " +" << n.img << "i\n";
    return out;
}
istream& operator >> (istream& in, Complexo& n){
    in >> n.real >> n.img;
    return in;
}

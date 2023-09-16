#include <iostream>
#include "Fracao.h"

using namespace std;
int main(){

    CFracao a (1, 3);
    CFracao b (2, 6);
    CFracao c (4, 5);
    CFracao d (5, 3);
    CFracao oper(1, 1);

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
    


    return 0;
}

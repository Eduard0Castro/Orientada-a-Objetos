#include <iostream>
#include "poligonus.h"
#include "cmath"

using namespace std;

Poligonus::Poligonus(){
    c = b = 10;

}

Poligonus::Poligonus(int lado, int larg){
    c = lado;
    b = larg;
}

Poligonus::~Poligonus(){
    cout << "\nDestruindo Objeto" << endl;
}

float Poligonus::area(){
    
    float areia = (c*(pow(b, 2)))*(cos(3.141593/c))/(sin(3.141593/c))/4;

    return areia;
}

int Poligonus::perimetro(){

    int perimetro = c*b;

    return perimetro;

}

string Poligonus::nome(){
string nome;
    switch (c)
    {
     case 3:
        nome = "Triangulo";
        break;
     case 4:
        nome = "Quadrilátero";
        break;
     case 5:
        nome = "Pentágono";
        break;
     case 6:
        nome = "Hexágono";
        break;
     case 7:
        nome = "Heptágono";
        break;
     case 8:
        nome = "Octógono";
        break;
     case 9:
        nome = "Eneágono";
     case 10:
        nome = "Decágono";
        break;
    default:
        nome = "Galvas";
        break;
    }
        

return nome;

}


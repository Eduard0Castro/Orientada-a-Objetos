#include "retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(){
    alt = larg = 10;
    cout << "Construindo objeto" << endl;
}


Retangulo::Retangulo(int a = 10, int l = 10){

    alt = a;
    larg = l;
   
}

Retangulo::~Retangulo(){
    cout << "Destruindo objeto" << endl;
}

int Retangulo::perimetro(){
    int per = (2*alt) + 2*(larg);
    return per;
}

int Retangulo::area(){

    int areia = alt * larg;
    return areia;
}

void Retangulo::imprime(){
    cout << "\n";
    for(int i = 0; i < larg; i++){
        for(int j = 0; j < alt; j++){
            if(i == 0 | i == larg - 1 | j == 0 | j == alt -1 ){
                cout << "X";
            }
            else
                cout << "-";
        }
        cout << "\n";
    }
    cout << "\n";

}

bool Retangulo::issquare(){
    if (alt == larg)
        return true;
    else
        return false;
    
}

void Retangulo::atributos(){
    cout << "\nDigite a altura e a largura do retangulo: ";
    cin >> alt >> larg;
       
}
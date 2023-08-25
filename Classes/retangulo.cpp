#include "retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(){
    alt = larg = 10;
    cout << "Construindo objeto";
}

Retangulo::Retangulo(int a, int l){

    alt = a;
    larg = l;
}

Retangulo::~Retangulo(){
    cout << "Destruindo objeto";
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
    for(int i = 0; i < larg; i++){
        for(int j = 0; i < alt; j++){
            if(i == 0 | i == larg - 1 | j == 0 | j == alt -1 ){
                cout << "X";
            }
            else
                cout << "-";
        }
        cout << endl;
    }
}

bool Retangulo::issquared(){
    if (alt == larg)
        return true;
    else
        return false;
    
}
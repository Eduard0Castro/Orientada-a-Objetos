#include <iostream>
#include "triangulo.h"
#include "cmath"

using namespace std;

Triangulo::Triangulo(){
    a = 4;
    b = 5;
    c = 3;
}

Triangulo::Triangulo(int d, int e, int f){
    Verifica(d, e, f);
    
}

bool Triangulo::Verifica(int d, int e, int f){
    if ((d + e > f) && (d + f > e) && (e + f > d) ){

        if ((d*d == e*e + f*f)||(e*e == d*d + f*f)||(f*f == e*e + d*d)){
            
            cout << "É um triângulo retângulo\n";
            a = d;
            b = e;
            c = f;
            return true;
        }
        else{
            cout << "Não é um triângulo retângulo!" << endl;
            return false;
        }
    }

    else{
        cout << "Esses lados não podem formar um triângulo!\n";
        return false;
    }
}

void Triangulo::SomeTriangles(){

    for(int h = 0; h <= 100; h++){
        for(int i = 0; i <= 100; i++){
            for(int j = 0; j <= 100; j++){
                if(h == sqrt(i*i + j*j)){
                    if(Verifica(h, i, j) == 1)
                        cout << h << " " << i << " " << j << endl;
                }
            }
        }
    }
}
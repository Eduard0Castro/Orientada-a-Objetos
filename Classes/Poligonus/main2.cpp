#include<iostream>
#include "poligonus.h"

using namespace std;

int main(){

   Poligonus poli(3, 10);

    cout << poli.nome() << " " << poli.perimetro() << endl;
    cout << "Área " << poli.area() << endl;

}
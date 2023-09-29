#include <iostream>
#include "point.h"

using namespace std;

int main(){

    Point p (1, 2);
    Circle cir(2, 5, 2);
    Cylinder cil(3, 8, 4, 6);
    Circle jey;
    Cylinder niko;

    cout << p;
    cout << endl;
    cout << cir;
    cout << endl;
    cout << cil;

    cout << "\n";
    cout << "Digite os valores de x, y e raio para o círculo 'jey'\n";
    cin >> jey;
    cout << "Digite os valores de x, y, raio e altura para o cilindro 'niko'\n";
    cin >> niko;
    cout << "\n";

    cout << jey << "\n";
    cout << niko;

    cout << "\n";

    cout << "\nJey: "<< jey.area() << " unidades de área " << jey.volume() << " unidades de volume.\n";
    cout << "Niko: "<< niko.area() << " unidades de área " << niko.volume() << " unidades de volume.\n";


}
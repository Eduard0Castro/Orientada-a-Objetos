#include <iostream>
#include "point.h"

using namespace std;

int main(){

    int n = 0;
    int type = 0;

    cout << "Digite quantos objetos gostaria de criar: ";
    cin >> n;

    Point *pointer [n];

    for(int i = 0; i < n; i++){
        
        cout << "\nQual o tipo de point para o " << i + 1 << "°?" 
             << "\n1 - Ponto\n2 - Circle\n3 - Cylinder \n4 - Quadrado\n5 - Prisma\n-- ";
        cin >> type;

        switch (type)
        {

        case 1:
            pointer[i] = new Point;
            cout << "Digite os atributos do ponto: \n";
            cin >> *pointer[i];
            break;

        case 2:
            pointer[i] = new Circle;
            cout << "Digite os atributos do círculo: \n";
            cin >> *pointer[i];
            break;

        case 3:
            pointer[i] = new Cylinder;
            cout << "Digite os atributos do cilindro: \n";
            cin >> *pointer[i];    
            break;

        case 4: 
            pointer[i] = new Quadrado;
            cout << "Digite os atributos do quadrado: \n";
            cin >> *pointer[i];
            break;

        case 5:
            pointer [i] = new Prisma;
            cout << "Digite os atributos do prisma: \n";
            cin >> *pointer[i];
            break;

        default:
            break;
        }
    }

    for (int j = 0; j < n; j++){
        cout << endl;
        cout << *pointer[j];
        cout << "Area: "<< endl;
        cout << pointer[j]->area() << endl;
        cout << "Volume: "<< endl;
        cout << pointer[j]->volume();
        cout << endl;

    }

    for (int k = 0; k < n; k++){
        delete pointer[k];
    }


}
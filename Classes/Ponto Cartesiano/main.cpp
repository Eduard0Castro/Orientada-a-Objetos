#include <iostream>
#include "ponto.h"

using namespace std;

int main(){

    Ponto O(3,4);
    Ponto P(0 ,0);
    Ponto K(0,0);
    Ponto inter(0,0);
    
    
    cout << O;
    cout << "Atualize as coordenadas cartesianas para o ponto 'O': ";
    cin >> O;
    cout << "\nPonto 'O' atualizado: " << O;

    cout << "\n";

    cout << "Pré e pós incremento: \n";
    for (int i = 0; i < 5; i++){
        inter = ++K;
        cout << inter;
    }

    K = P;
    cout << "\n";

    for (int j = 0; j < 5; j++){
        inter = P++;
        cout << inter;

    }
}
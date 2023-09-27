#include <iostream>
#include "political.h"

using namespace std;

int main(){


    Political T ("Trump", "Presidente", "Republicano");
    cout << "\n";
    President J ("Jânio Quadros", "Presidente", "PTB", "Brasil");
    cout << "\n";
    Governor D ("Dória", "Governador", "PSDB", "Brasil", "São Paulo");
    cout << "\n";
    Mayor P ("Paulo Maluf", "Prefeito", "MDB", "Brasil", "São Paulo", "São Paulo");
    cout << "\n";

    T.print();
    J.print();
    D.print();
    P.print();

    return 0;
}
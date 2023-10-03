#include <iostream>
#include "political.h"

using namespace std;

int main(){


    Political T ("Trump", "Presidente", "Republicano");
    President J ("Jânio Quadros", "Presidente", "PTB", "Brasil");
    Governor D ("Dória", "Governador", "PSDB", "Brasil", "São Paulo");
    Mayor P ("Paulo Maluf", "Prefeito", "MDB", "Brasil", "São Paulo", "São Paulo");

    T.print();
    J.print();
    D.print();
    P.print();

    Political *poin[3];

    poin [0] = new Governor("Arnoldo", "Governador", "Republicano", "USA", "Califórnia");
    poin [1] = new Mayor("Mauricio", "Prefeito", "PR", "Brasil", "Amapá", "Macapá");
    poin [2] = new President("Enéas Carneiro", "Presidente", "PRONA", "Brasil");

    
    for (int i = 0; i < 3; i++){
        poin[i]->print();
        
    }

    int n = 0;
    int type = 0;

    cout << "Digite a quantidade de políticos a serem criados: ";
    cin >> n;

    Political *pointer[n];

    for(int i = 0; i < n; i++){
        cout << "\nQual o tipo de político para o " << i + 1 << "°?" 
             << "\n1 - Presidente\n2 - Governador\n3 - Prefeito\n-- ";
        cin >> type;

        switch (type)
        {
        case 1:
            pointer[i] = new President;
            cout << "Digite os atributos para o presidente: \n";
            cin >> *pointer[i];
            break;

        case 2:
            pointer[i] = new Governor;
            cout << "Digite os atributos para o Governador: \n";
            cin >> *pointer[i];
            break;

        case 3:
            pointer[i] = new Mayor;
            cout << "Digite os atributos para o prefeito: \n";
            cin >> *pointer[i];
            break;
        
        default:
            break;
        }

    }

    for (int j = 0; j < n; j++){
        cout << *pointer[j];
        
    }


    return 0;
}
#include <iostream>
#include "vector.h"

using namespace std;

int main(){
        
        Vector<float> vector;
        int index;
        
        cout << "Entre com os dados para o vetor: \n";
        cin >> vector;
        vector.Ordena();
        cout << vector << endl;

        cout << "Gostaria de acessar qual índice do vetor? ";
        cin >> index;

        try{
            float result = vector[index];
            cout << "Conteúdo do index " << index << " é: " << result << endl;   
        }

        catch(out_of_range &ex){
            cout << "\nIndex inválido!\n";

        }

        return 0;
}

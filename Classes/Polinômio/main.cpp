#include<iostream>
#include"polinomio.h"

using namespace std;

int main() {

    Polinomio h4;
    Polinomio h3;
    Polinomio result;
    int index = 0;
    
    int ponto = 2;
    float calculo;

    cin >> h4 >> h3;
    cout << h4 << h3;

    cout << "\n";

    cout << "Soma: \n";
    result = h4 + h3;
    cout << result;

    cout << "Subtração: \n";
    result = h4 - h3;
    cout << result;

    cout << "Derivada: \n";
    result = h3.deriva();
    cout << result;

    cout << "Valor para o ponto: " << ponto << endl;
    calculo = h3.calcula(ponto);
    cout << calculo << endl;

    cout << "Uma das raízes calculada pelo método de Newton: \n";
    calculo = h3.NewtonsMethod(20, 200000);
    cout << calculo << endl;

    cout << "Digite um índice para ver o coeficiente: ";
    cin >> index;

    try {
        
        cout << h3[index] << endl;
        cout << "Passou direto" << endl;

    }

    catch(out_of_range &ex){

        cout << "Valor fora do range!" << endl;        

    }

    cout<< "Finished\n";
}
#include<iostream>
#include"polinomio.h"

using namespace std;

int main() {

    Polinomio h4;
    Polinomio h3;
    Polinomio result;

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

    cout << "Valor em um ponto para a derivada: \n";
    calculo = result.calcula(1);
    cout << calculo << endl;

    cout << "Uma das raízes calculada pelo método de Newton: \n";
    calculo = result.NewtonsMethod(5, 1000);
    cout << calculo << endl;
}
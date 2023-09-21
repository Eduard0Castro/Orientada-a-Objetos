#include<iostream>
#include"polinomio.h"

using namespace std;

int main() {

    Polinomio h4;
    Polinomio h3;
    Polinomio result;

    cin >> h4 >> h3;
    cout << h4 << h3;

    cout << "\n";

    cout << "Soma: \n";
    result = h4 + h3;
    cout << result;

    cout << "\n";

    cout << "Subtração: \n";
    result = h4 - h3;
    cout << result;
}
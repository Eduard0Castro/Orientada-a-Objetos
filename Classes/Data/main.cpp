#include <iostream>
#include "data.h"

using namespace std;

int main(){

    Data today(22, 9, 2023);
    Data inter;
    Data last(31, 12, 2023);
    Data teste(35, 11, 2023); 
    Data bis(29, 02, 2016);
    Data nbis(29, 02, 2011);

    cout<< teste;
    
    cout << "\n";

    cout << "Pré incremento: \n";
    inter = ++last;
    cout << inter;

    cout << "\n";

    cout << "Pós incremento: \n";
    inter = inter++;
    cout << inter;

    cout << "\n";

    cout << "Ano bissexto: " << bis;
    cout << "Ano não bissexto: " << nbis;

}
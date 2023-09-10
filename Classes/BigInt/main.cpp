#include <iostream>
#include "bigint.h"

using namespace std;

int main(){

    BigInt n;
    BigInt h;
    BigInt Result;
    n.Read();
    n.Print();

    h.Read();
    h.Print();

    cout << "\nSoma: ";
    Result = n.Soma(h);
    Result.Print();

    cout << "Subtração: ";
    Result = n.Sub(h);
    Result.Print();

    



}
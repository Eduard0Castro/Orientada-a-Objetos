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

    Result = n.Soma(h);
    Result.Print();

    Result = n.Sub(h);
    Result.Print();

    



}
#include <iostream>
#include "pilha.h"
using namespace std;
int main()
{
    Pilha pInt(0);
    int aux;
    try
    {
        // usando a pilha de inteiros
        cin >> pInt;
        cout << "Valor no topo da pilha: " << pInt.pop(aux) << endl;
        cout << pInt << endl;
    }
    catch (runtime_error & rt)
    {
     cout << rt.what() << endl;
    }
    return 0;
}
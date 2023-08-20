#include<iostream>
#include "factorial.h"

using namespace std;


int main(){
    int number = 0;
    cout << "Digite um numero inteiro: ";
    cin >> number;
    cout << factorial(number);
    cout<<"\n";
}

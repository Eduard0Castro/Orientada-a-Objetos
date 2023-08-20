#include<iostream>
#include <cmath>
using namespace std;

bool Palindromo(const string &x);

int main(){
    string num{};
    cout << "Digite um numero para verificar se é palindromo: ";
    cin >> num;
    bool istrue = Palindromo(num);
    cout << istrue << "\n";
    
}

bool Palindromo(const string &n){

    int tam = n.length() - 1;
    string inverso{};
    for (int i = tam; i >= 0; i--){
        inverso += n[i];
    }
    cout << inverso << "\n";
    if (inverso == n){
        return true;
    }
    else{
        return false;
    }
}


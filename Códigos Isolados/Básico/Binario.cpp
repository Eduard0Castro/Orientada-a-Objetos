#include <iostream>
#include <cmath>


using namespace std;
int bin2dec(const string &n);

int main(){

    string bin{};
    cout << "Digite um numero em binario para saber o decimal: ";
    cin >> bin;

    cout << bin2dec(bin) << "\n";
}

int bin2dec(const string &n){
    
    int tam = n.length() -1;
    double valor = 0;
    for(int i = tam; i >= 0; i--){
        
        if(n[i] == '1'){
            valor += pow(2, tam - i);
        } 
    }
    return valor;
}

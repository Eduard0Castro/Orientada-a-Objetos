#include<iostream>

//usando biblioteca padrão:
using namespace std;

//Protótipo da função:
int cube(int n);

int main(){
    int number = 0;
    cout << "Digite um número inteiro: ";
    cin >> number;
    cout  << "O cube do numero "<< number<< " é " << cube(number)<<endl;

}
//Função declarada:
int cube(int n){

    return n*n*n;
}
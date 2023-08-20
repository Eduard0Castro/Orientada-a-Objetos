#include<iostream>

using namespace std;
int Soma(int x);
int main(){

    int number = 0;
    cout << "Digite um número inteiro para saber a soma com seus antecessores: ";
    cin >> number;
    cout <<Soma(number)<< "\n";

}

int Soma(int x){
    
    int soma = 0;
    if (x != 0){
        soma = x + Soma(x -1);
    }
    else{
        soma = 0;
    }
    
    return soma;
}

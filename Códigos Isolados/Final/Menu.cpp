#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

//Protótipos das funções
void Menu();
void Factorial ();
void Primo();
void Base(int n, int base);
void Retangulo();
int Soma(int n);
int Mdc(int x, int y);
void Bin2dec();
void Palindromo();

int main(){
    int esc = 1;
    int number = 5;
    
    while (esc != 0){
        Menu();
        cin >> esc;
        switch (esc){
            case 1: Factorial(); break;
            case 2: Primo(); break;
            case 3: Menu(); break;
            case 4: Base(100,16); break;
            case 5: Retangulo(); break;
            case 6: cout << "A soma é: " << Soma(number) << "\n"; break;
            case 7: cout << Mdc(27, 18) << "\n"; break;
            case 8: Bin2dec(); break;
            case 9: Palindromo(); break;
            case 10: break;
        }
        cin.get();
        
        // system("clear");
    }
}

void Menu(){

    int esc = 1;
    int number = 5;
    cout << "Digite o que você gostaria de fazer:\n";
    cout << "Sair do programa[0]\n";
    cout << "Factorial [1]\n";    
    cout << "Numeros primos [2]\n";
    cout << "Eu mesmo[3]\n";
    cout << "Mudança de base[4]\n";
    cout << "Retangulo na tela[5]\n";
    cout << "Soma dos n primeiros numeros inteiros[6]\n";
    cout << "Maximo divisor comum[7]\n";
    cout << "Binário para decimal [8]\n";
    cout << "Palíndromo[9]\n";
    cout << "--";
}


void Factorial(){
    int x = 0;
    cout << "Digite um numero para saber seu fatorial: ";
    cin >> x;
    int result = 1;
    for (int i = 1; i <= x; i++){
        result = result*i;
    }
    cout << result << endl;
}

void Primo(){
    int count = 0;
    int ola = 1;
    int number = 2;
    int n;
    cout << "Digite quantos números primos você gostaria de ver em ordem: ";
    cin >> n;
    while (ola <= n){
        count = 0;
        for(int i = 1; i <= number; i++){
            if (number % i ==0){
                count ++;
            }
        }
        if (count == 2){
            cout<< number <<" ";
            ola ++;
        }
        number ++;
    }
    cout << "\n";
  
}
void Base(int n, int base)
{

    char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    if(n >= base)
        Base(n/base, base);
    cout << Array[ n % base ];
}

void Retangulo(){
    int lar, h;
    char bor, preen;

    cout << "Entre com a largura e altura: ";
    cin >> lar >> h;

    cout << "Entre com os char da borda e do preenchimento: ";
    cin >> bor >> preen;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < lar; j++){
            if(i == 0 | j == 0 | i == h -1| j == lar -1 ){
                cout << bor;
            }
            else{
                cout << preen;
            }
        }
        cout << endl;
    }
}

int Soma(int n){
    int soma = 0;
    if (n != 0){
        soma = n + Soma(n-1);
    }
    else {
        soma = 0;
    }
    return soma;
}

int Mdc (int x, int y){
    return y ? Mdc(y, x%y) : abs(x);
}

void Bin2dec(){
    string bin{};
    cout << "Insira um número binário: ";
    cin >> bin;
    double valor = 0;
    int tam = bin.length() - 1;
    for (int i = tam; i >=0; i--){
        if (bin[i] == '1'){
            valor += pow(2, tam -i);
        }
    }
    cout << valor << "\n";
}

void Palindromo(){
    string n{};
    cout << "Digite o numero para saber se é um palindromo: ";
    cin >> n;
    int tam = n.length() - 1;
    string inverso{};
    for (int i = tam; i >= 0; i--){
        inverso += n[i];
    }
    cout << inverso << "\n";
    if (inverso == n){
        cout << "É um palíndromo!\n";
    }
    else{
        cout << "Não é um palindromo!\n";
    }
}
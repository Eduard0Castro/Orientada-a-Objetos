#include <iostream>
using namespace std;

void Retangulo(int l, int a, char b, char p);

int main(){
    int lar, h;
    char bor, preen;

    cout << "Entre com a largura e altura: ";
    cin >> lar >> h;

    cout << "Entre com os char da borda e do preenchimento: ";
    cin >> bor >> preen;

    Retangulo(lar, h, bor, preen);
    return 0;
}

void Retangulo(int l, int a, char b, char p){

    for (int i = 0; i < a; i++){
        for (int j = 0; j < l; j++){
            if(i == 0 | j == 0 | i == a -1| j == l -1 ){
                cout << b;
            }
            else{
                cout<<p;
            }

        }
        cout << endl;

    }


}
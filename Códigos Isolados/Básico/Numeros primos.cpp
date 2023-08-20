#include <iostream>

using namespace std;
void verificador (int n);

int main(){
    int n;
    cout << "Digite quantos numeros primos voce deseja ver: ";
    cin >> n;
    verificador(n);
    cout << "\n";
}


void verificador(int n){
    int count = 0;
    int ola = 1;
    int number = 2;
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

}

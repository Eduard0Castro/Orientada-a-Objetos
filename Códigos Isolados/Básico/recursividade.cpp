#include <iostream>

using namespace std;
int factorial(int n){
    int fatorial = 1;

    if (n > 1)

        fatorial = n*factorial(n-1);
   
    return fatorial;
}

int fibonnacci(int n, int one, int two){

    int three = two + one;

    
    if (n > 1){
        
        one = two;
        two = three;
        cout << fibonnacci(--n, one, two) << " ";

    }

    return three;
}

int main(){

    int fatorial = 1;
    int n = 7;
    cout << "Fatorial com recursividade: "<< factorial(n) << endl;

    while(n > 0)
        fatorial *= n--;

    cout << "Fatorial com loop: " << fatorial << endl;

    cout << "Fibonnacci com recursidade (trás pra frente): " << fibonnacci(6, 0, 1) << endl;
}
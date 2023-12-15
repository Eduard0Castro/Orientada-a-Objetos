#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    
    stack<int> pilha;
    queue<int> fila;

    for (int i = 0; i <= 5; i++){
        pilha.push(i);
        fila.push(i);
    }

    cout << "Pilha: ";
    for(int i = 0; i <= 5; i++){
        cout << pilha.top() << " ";
        pilha.pop();

    }

    cout << "\nFila: ";
    for (int i = 0; i <= 5; i++){
        cout << fila.front() << " ";
        fila.pop();
    }
    cout << endl;
}


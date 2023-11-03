#include <iostream>
#include <stack>

using namespace std;
 
int menu ();

int main(){
    
    stack <int> pilha;
    int esc = 0;

    while ( esc != 5){
        esc = menu();

        switch (esc)
        {
        case 1:
            int mem;
            cout << "Entre com o valor a ser inserido: ";
            cin >> mem;
            pilha.push(mem);
            break;

        case 2:
            pilha.pop();
            break;

        case 3:
            cout << endl;
            cout << "Tamanho da pilha: ";
            cout << pilha.size() << endl;
            cout << endl;
            break;

        case 4:
            cout << endl;
            cout << "Primeiro elemento da pilha: ";
            cout << pilha.top() << endl;
            cout << endl;
            break;

        case 5:
            break;
        default:
            break;
        }
        
    }

    return 0;
}

int menu(){
    int esc = 0;

    cout << "Digite o que você gostaria de fazer:\n";
    cout << "Inserir um elemento na pilha [1]\n";
    cout << "Remover um elemento da pilha [2]\n";    
    cout << "Tamanho da pilha [3]\n";
    cout << "Primeiro elemento da pilha [4]\n";
    cout << "Sair[5]\n";
    cout << "Escolha (1-5): ";
    cin >> esc;
    return esc;
}



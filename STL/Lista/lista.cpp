#include <iostream>
#include "list.h"

using namespace std;

int menu();
void Teste(list<float>);

int main(){
    
    Lista<int> lista;
    int esc = 0;
    list<float> teste;

    for (int i = 0; i <= 5; i++)
        teste.push_back(i);

    Teste(teste);

    while (esc != 14){
        esc = menu();
        int qqc;

        switch(esc){
            case 1:
                cout << "Digite o elemento a ser colocado na frente: ";
                cin >> qqc;
                lista.inFront(qqc);
                break;

            case 2:
                cout << "Digite o elemento a ser colocado no final: ";
                cin >> qqc;
                lista.inEnd(qqc);
                break;

            case 3:
                lista.outFront();
                break;

            case 4:
                lista.outEnd();
                break;

            case 5:
                cout << "\nPrimeiro elemento da lista: "; 
                cout << lista.first()<< endl;
                cout << endl;
                break;

            case 6:
                cout << "\nÚltimo elemento da lista: ";
                cout << lista.last() << endl;
                cout << endl;
                break;

            case 7:
                cout << "\nTamanho da lista: ";
                cout << lista.Size() << endl;
                cout << endl;
                break;

            case 8:
                cout << "Digite o novo tamanho da lista: ";
                cin >> qqc;
                lista.Resize(qqc);
                break;

            case 9:
                cout << "Digite o valor específico que deseja remover: ";
                cin >> qqc;
                lista.removeElement(qqc);
                break;
            
            case 10: 
                lista.removeduplicated();
                break;

            case 11:
                lista.Revert();
                break;

            case 12: 
                lista.Ordem();
                break;
            
            case 13:
                lista.show();
                break;

            case 14:
                break;

            default:
                break;
        }
    }

    
}

int menu (){
    int esc = 0;

    cout << "Digite o que você gostaria de fazer:\n";
    cout << "1. Inserir um elemento na frente\n";
    cout << "2. Inserir um elemento no final \n";
    cout << "3. Excluir um elemento na frente \n";
    cout << "4. Excluir um elemento no final \n";
    cout << "5. Exibir primeiro elemento da lista \n";
    cout << "6. Exibir último elemento da lista \n";
    cout << "7. Tamanho da lista \n";
    cout << "8. Redimensionar pilha \n";
    cout << "9. Remover elemento específico \n";
    cout << "10. Remover valores dupliacados \n";
    cout << "11. Reverter a ordem dos elementos \n";
    cout << "12. Ordenar a lista \n";
    cout << "13. Mostrar lista completa \n";
    cout << "14. Sair: \n";
    cout << "Escolha (1-14): ";
    cin >> esc;
    return esc;
}

void Teste(list<float> hugo){
    list<float>::iterator it;
    for(it = hugo.begin(); it != hugo.end(); it++ )
        cout << *it << " ";

    cout << endl;
}
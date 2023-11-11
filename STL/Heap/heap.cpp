#include <iostream>
#include <queue>

using namespace std;

int menu();

int main(){

    int esc = 0;
    priority_queue<int> heap;

    while (esc != 6){
        esc = menu();
        switch (esc){
            case 1:
                int ele;
                cout << "Digite o valor do elemento: ";
                cin >> ele;
                heap.push(ele);
                break;
            
            case 2:
                                
                if (!heap.empty()){
                    heap.pop();
                }
                else    
                    cout << "\nHeap vazia, volte outro dia\n" << endl;
                break;

            case 3:

                cout << "\nTamanho: " << heap.size() << endl;
                cout << endl;
                break;

            case 4:

                if (heap.empty()){
                    cout << "\nPrimeiro elemento da heap: " << heap.top() << endl;
                    cout << endl;
                }

                else    
                    cout << "\nHeap vazia, volte outro dia!\n" << endl;

                break;

            case 5:

                
                if (heap.empty()){
                    cout << "\nHeap vazia, insira elementos!!!" << endl;
                    cout << endl;
                }

                else{
                    for(int i = heap.size(); i > 0; i--){
                        cout << heap.top() << " ";
                        heap.pop();
                    }
                    cout << endl;

                }

                break;

            default:
                break;

        }

    }

}

int menu(){
    int esc = 0;
    cout << "Digite a opção para a fila de prioridade: " << endl;
    cout << "1. Inserir um elemento na heap" << endl;
    cout << "2. Remova um elemento da heap" << endl;
    cout << "3. Visualizar tamanho da heap" << endl;
    cout << "4. Visualizar primeiro elemento da heap" << endl;
    cout << "5. Visualizar heap completa e remover todos os elementos" << endl;
    cout << "6. Sair" << endl;
    cout << "-- ";
    cin >> esc;
    return esc;
}
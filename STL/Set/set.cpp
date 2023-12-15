#include <iostream>
#include<set>
#include <algorithm>

using namespace std;
int menu();

int main(){

    int esc = 0;
    multiset<int> jango;
    multiset<int>::iterator it;
    int ele;

    while(esc != 7){
        esc = menu();

        switch(esc){
            case 1:
    
                cout << "Digite o elemento a ser inserido: ";
                cin >> ele;
                jango.insert(ele);
                break;

            case 2:

                if(!jango.empty()){
                    cout << "Digite o elemento a ser removido: ";
                    cin >> ele;
                    if (binary_search(jango.begin(), jango.end(), ele))
                        jango.erase(ele);

                    else
                        cout << "\nElemento não se encontra no set\n";

                }
                
                else
                    cout << "\nVazia, insira elementos!\n";
                cout << endl;
                break;

            case 3:
                if(!jango.empty()){
                    cout << "\nElementos em ordem: ";
                    for(it = jango.begin(); it != jango.end(); it++){
                        cout << *it << " ";
                    }
                    cout <<endl;
                }

                else
                    cout << "\nVazia, insira elementos\n";
                cout << endl;
                break;

            case 4:

                cout << "\nQuantidade de elementos: " << jango.size()<< endl;
                cout << endl;
                break;

            case 5:

                jango.clear();
                break;

            case 6:
           
                cout << "Digite o elemento a ser consultado: ";
                cin >> ele;
                cout << endl <<jango.count(ele) << " aparições do elemento " 
                     << ele << endl;
                cout << endl;
                break;

            default:
                break;

        }

   
    }

    return 0;
}

int menu(){
    int esc = 0;

    cout << "Digite a opção para set: \n";
    cout << "1. Inserir elemento\n";
    cout << "2. Remover elemento específico\n";
    cout << "3. Exibir elementos em ordem\n";
    cout << "4. Exibir quantidade de elementos\n";
    cout << "5. Remover todos os elementos\n";
    cout << "6. Consultar quantidade de elementos com determinado valor\n";
    cout << "7. Sair\n";
    cout << "--";
    cin >> esc;
    return esc;
}
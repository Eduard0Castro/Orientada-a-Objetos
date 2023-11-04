#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

//List permite inserir elementos nas posições intermediárias

int main(){
    list<string> nomes;
    list<string>::iterator it;

    nomes.push_back("José");
    nomes.push_back("Castro");

    it = nomes.begin();
    nomes.insert(it, "Eduardo");
    //mesmo depois dessa inserção, meu it ainda aponta para 'José'
    
    it++;//aponta para 'Castro'
    nomes.insert(it, "Souza"); //coloca 'Souza' antes de 'Castro'
    it --; //aponta para 'Souza'
    nomes.insert(it, "de"); //insere 'de' antes de Souza

    for (it = nomes.begin(); it != nomes.end(); it++){
        cout << *it << " ";
    }

    nomes.remove("Castro");
    cout << endl;

    for (it = nomes.begin(); it != nomes.end(); it++){
        cout << *it << " ";
    }

    cout << endl;

}
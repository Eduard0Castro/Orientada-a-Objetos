#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> idade;
    vector<int> backup;
    vector<int>::iterator it;
    vector<char> nome;
    vector<char>::iterator itc;
    

    idade.push_back(45);
    idade.push_back(27);
    idade.push_back(56);
    idade.push_back(16);

    for (int i = 0; i < idade.size(); i++){
        cout << idade[i] << " "; //operador [] sobrecarregado dentro da biblioteca!

    }

    cout << endl;


    sort(idade.begin(), idade.end());

    //it funciona como um ponteiro; o método end() aponta para o elemento depois do último
    //por isso o for consegue ir até o último valor armazenado dentro do vector
    for (it = idade.begin(); it != idade.end(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;

    nome.push_back('E');
    nome.push_back('d');
    nome.push_back('u');
    nome.push_back('a');
    nome.push_back('r');
    nome.push_back('d');
    nome.push_back('o');

    for (itc = nome.begin(); itc != nome.end(); ++itc){
        cout << *itc;
    }
    cout << endl;

    idade.swap(backup); //troca os elementos de vetores do mesmo tipo
    backup.erase(backup.begin());

    for (it = backup.begin(); it != backup.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    
}
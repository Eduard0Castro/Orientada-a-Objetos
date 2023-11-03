#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

//Deque permite que se coloque elementos na primeira posição
//o que o vector não permite

template <typename T>
void show(deque<T> &dados){
    
    //typename, nesse caso, é pra mostrar para o compilador que se trata de um tipo
    //e não uma função ou variável
    typename deque<T>::iterator it;

    for (it = dados.begin(); it != dados.end(); it ++){
        cout << *it << " ";
    }
    cout << endl;

}

int main(){

    deque<float> dados;
    deque<string> yuval;

    dados.push_back(48.54);
    dados.push_back(27.85);
    dados.push_back(40.02);
    dados.push_back(15.45);

    yuval.push_back("Eduardo");

    show(dados);
    show(yuval);

    dados.push_front(111.255);
    yuval.push_front("The only one:");
    show(dados);
    show(yuval);
}
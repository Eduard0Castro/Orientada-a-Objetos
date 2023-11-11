#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){

    //Não permite elementos repetidos
    set<int> tree;
    //Iterador percorre a árvore em ordem
    set<int>::iterator it;
    set<int>::iterator itlow, itup;

    //Para aceitar valores repetidos:
    multiset<int> treemult;
    multiset<int>::iterator mult;

    //Para formar pares sem repetições de chaves:
    map<int, string> kiko;
    map<int, string>::iterator mapeado;
    

    tree.insert(50);
    tree.insert(20);
    tree.insert(50);
    tree.insert(30);
    tree.insert(10);
    tree.insert(10);
    tree.insert(40);

    for (int i = 0; i < 100; i += 10)
        tree.insert(i);

    itlow = tree.lower_bound(30);
    itup = tree.upper_bound(50);
    tree.erase(itlow, itup);

    cout << "Tree com intervalo de 30 a 50 removido: ";
    for(it = tree.begin(); it != tree.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < 50; i += 10){
        treemult.insert(i);
        treemult.insert(i); //aceita duplicatas!

    }

    treemult.erase(20); //remove todos os '20'
    
    cout << "Treemult com 20 removido e resto duplicado: ";
    for (mult = treemult.begin(); mult != treemult.end(); mult ++){
        cout << *mult << " ";
    }
    cout << endl;
    cout << endl;

    //Em ordem:
    kiko.insert(make_pair(33351252, "Lilian"));
    kiko.insert(make_pair(999301, "Guilherme"));
    kiko.insert(make_pair(33351252, "Eduardo"));//Chave repetida, multimap resolve!

    for(mapeado = kiko.begin(); mapeado != kiko.end(); mapeado++){
        cout << mapeado->first << " " <<mapeado->second << endl;
    }

    cout << endl;
}
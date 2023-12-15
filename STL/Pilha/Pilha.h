#include <iostream>
#include <stack>
#include <algorithm>
#ifndef PILHA_H
#define PILHA_H

using namespace std;

template <typename T>
class Pilha {
    private:
        int tam;
        T topo;
        stack<T> pilha;

    public:
        Pilha(){
        }
        ~Pilha(){}

        void insert(T qqc){
            pilha.push(qqc);
        }

        void remove (){
            pilha.pop();
        }

        int size(){
            tam = pilha.size();
            return tam;

        }

        T First (){
            topo = pilha.top();
            return topo;
        }

};

#endif
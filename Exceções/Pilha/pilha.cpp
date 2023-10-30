#include <iostream>
#include <exception>
#include "pilha.h"

using namespace std;

    Pilha::Pilha(int memoria){

        topo = -1;
        size = (memoria > 0)?memoria:10;
        dados = new int [size];

    }
    Pilha::~Pilha(){
        delete [] dados;
    }

    Pilha::Pilha(const Pilha &p){
        topo = p.topo;
        size = p.size;
        dados = new int [size];
        for(int i = 0; i < size; i++){
            dados[i] = p.dados[i];
        }

        
    }

    Pilha& Pilha::operator=(const Pilha &p){
        delete [] dados;
        size = p.size;
        dados = new int [size];
        for(int i = 0; i < size; i++){
            dados[i] = p.dados[i];
        }

        return *this;
    }

    int Pilha::pop(int &pop_to){
     
        if(topo == -1){
            
            throw runtime_error("Pilha está vazia!!");

        }
        pop_to = dados[topo];
        return pop_to;
    }

    int Pilha::push(int push_this){
        if(topo == size - 1){
            throw runtime_error("Está cheio, volte amanhã");
        }

        dados[++topo] = push_this;

        return push_this;
    }


#include <iostream>
#include <list>
#ifndef LIST_H
#define LIST_H

using namespace std;

template <typename T>
class Lista{
    private:
        int size;
        list<T> lista;

    public:
        Lista(){}
        ~Lista(){}

        bool isEmpty(){
            if(lista.size() == 0)
                return true;
            return false;
            
        }

        void inFront(T qqc){
            lista.push_front(qqc);
        }

        void inEnd(T qqc){
            lista.push_back(qqc);
        }

        void outFront(){
            if(isEmpty())
                cout << "Lista vazia!\n";
            else
                lista.pop_front();
        }

        void outEnd(){
            if(isEmpty())
                cout << "Lista vazia!\n";
            else
                lista.pop_back();
        }

        void first(){
            if (isEmpty())
                cout << "Lista vazia!\n";
            else
                cout << lista.front() << endl;
        }

        void last (){
            if (isEmpty())
                cout << "Lista vazia!\n";
            else
                cout << lista.back() << endl;
        }

        int Size(){
            size = lista.size();
            
            return size;
        }

        void Resize(int tam){
            lista.resize(tam);
        }

        void removeElement(T element){
            if(isEmpty())
                cout << "Lista vazia!\n";
            else
                lista.remove(element);
        }

        bool isduplicated(const T &value){
            typename list<T>::iterator it;
            int cont = 0;

            for(it = lista.begin(); it != lista.end(); it++){
                if(value == *it)
                    cont++;
            }
            if (cont > 1)
                return true;
            return false;
        }
        void removeduplicated(){
            //Objeto funtor, porque 'remove_if' espera uma função ou 
            //objeto funtor mas não uma função membro não estática
            if (isEmpty())
                cout << "Lista vazia\n";
            else{
                auto predicate = [this](const T &value) { return isduplicated(value); };
                lista.remove_if(predicate);
            }
        }

        void Revert(){
            lista.reverse();
        }

        void Ordem(){
            lista.sort();
        }

        void show(){
            typename list <T>::iterator it;
            cout << "\nLista completa: ";
            for(it = lista.begin(); it != lista.end(); it++){
                cout << *it << " ";
            }
            cout << endl << "\n";

        }

};


#endif

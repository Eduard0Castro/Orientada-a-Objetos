#ifndef PILHA_H
#define PILHA_H
#include <iostream>

using namespace std;

template <typename T>
class Pilha{

    private:
        int size;
        int topo;
        T *dados;

    public:
        Pilha(int mem = 0);
        virtual ~Pilha();

        bool is_empty();
        bool is_full();
        T push(T &);
        T pop(T &);

        friend ostream & operator << (ostream &out, Pilha &pilha){
        
            for (int i = pilha.topo; i >= 0; i--){
           
                out << pilha.dados[i] << " ";
            }

            out << endl;

            return out;
        }

        friend istream & operator >> (istream &in, Pilha &pilha){
            T aux;
            pilha.topo = -1;
            try{
                for (int i = 0; i < pilha.size; i++)
                {
                    cout << i+1 << "º: ";
                    in >> aux;
                    pilha.push(aux);
                }

                }
            catch (runtime_error & rt){
                cout << rt.what() << endl;
                }

            return in;

        }

};

#endif

template <typename T>
Pilha<T>::Pilha(int mem){
   
    topo = -1;
    size = (mem > 0? mem:5);
    dados = new T [size];
}

template <typename T>
Pilha<T>::~Pilha(){
    delete [] dados;
}


template <typename T>

bool Pilha<T>::is_empty(){
    if (topo == -1)
        return false;
    return true;
}

template <typename T>
bool Pilha<T>::is_full(){
    if (topo == size -1)
        return true;

    return false;
}


template <typename T>
T Pilha<T>::push(T &value){
    if (is_full())
        cout << "Está cheio, volte outro dia!" << endl;
    
    dados[++topo] = value;

    return value;
}

template <typename T>
T Pilha<T>::pop(T &aux){
    if (is_empty())
        cout << "Não tem nada por aqui!" << endl;
    
    aux = dados[topo];
    dados[topo--];
    return aux;
}


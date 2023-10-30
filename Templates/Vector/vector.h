#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

template <typename T>
class Vector {
    private:
        T *conteudo;
        int size;

    public:
        Vector(int s = 0){
            size = (s<=0 ? 5:s);
            conteudo = new T [size];
        }

        virtual ~Vector(){
            delete [] conteudo;         
        }

        void Ordena(){
            T aux;

            for(int i = 0; i < size; i ++){
                for (int j = 0; j < size - i -1; j++){
                    if (conteudo[j+1]<conteudo[j]){
                        aux = conteudo[j];
                        conteudo[j] = conteudo[j+1];
                        conteudo[j+1] = aux;
                    }
                }
            }
        }

        T operator [](int index){
            if (index < 0 || index >= size)
                throw out_of_range("Fora do range!");

            return conteudo[index];
        }

        
        friend ostream& operator<<(ostream &out, Vector<T> &vec){

            for (int i = 0; i < vec.size; i++){
                out << vec.conteudo[i] << " ";
            }

            out << endl;
            return out;

        }

        friend istream& operator>>(istream &in, Vector<T> &vec){
            for(int i = 0; i < vec.size; i++){
                cout << i +1 << "º: ";
                in >> vec.conteudo[i];    
            }

            return in;
        }
    
};

#endif


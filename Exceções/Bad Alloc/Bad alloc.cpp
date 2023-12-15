#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    double *vector;

    try{
        while (1){
            vector = new double [10000000000];
            vector[0] = 1;
        }
    }

    catch (bad_alloc &ex){
        cout << "Tá errado isso aí! "<< ex.what() << endl;
    }
}
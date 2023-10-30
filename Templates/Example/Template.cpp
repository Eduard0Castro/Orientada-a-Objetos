#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
void print_vector(T v, int size){
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";

    }
    cout << endl;
}

int main(){

    float ve[10];
    int vec[10];

    for (int i = 0; i < 10; i++){
        ve[i] = float (rand()%100)/10;

    }

    for (int j = 0; j < 10; j++){
        vec[j] = rand()%10+1;
    }

    print_vector(ve, 10);
    print_vector(vec, 10);


}
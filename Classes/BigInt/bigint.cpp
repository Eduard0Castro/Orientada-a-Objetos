#include <iostream>
#include "bigint.h"

using namespace std;

BigInt::BigInt(){

}

BigInt::BigInt(int n){
    for (int i = 0; i < 31; i++)
        number[i] = 0;
}

//Destrutor no .h

void BigInt::Read(){
    
    string n;
    cout << "Digite um número inteiro longo: ";
    cin >> n;
    cout << endl;

    size = n.length();

    for (int i = 0; i < size; i++)
        number[i] = n[i] - '0';

}

void BigInt::Print(){
    for (int i = 0; i < size; i++)
        cout << number[i];
    cout << endl;
}

BigInt BigInt::Soma(BigInt b){
    BigInt c;
    c.size = max(size, b.size);
    int vaiUm = 0;

    if (b.size < size) {
        int offset = size - b.size;
        BigInt novo;
        novo.size = size;

        //Bits do meu novo até o offset setados com 0:
        for (int j = 0; j < offset; j++) {
            novo.number[j] = 0; 
        }
        //Bits do offset até size do meu novo com os bits do b:
        for (int j = offset; j < size; j++) {
            novo.number[j] = b.number[j - offset];
        }

        b = novo;
    }

        
    for(int i = c.size - 1; i >=0; i--)
    {
        int x = vaiUm;
        if(i < size) x += number[i];
        if(i < b.size) x += b.number[i];
        c.number[i] = x % 10;
        vaiUm = x / 10;
    }



    while (c.size > 1 && c.number[0] == 0) {
        c.size--;
    }
    
    return c;

}

BigInt BigInt::Sub(BigInt b){

    BigInt c;
    c.size = max(size, b.size);
    int tam = 0;

        if (b.size < size) {
        int offset = size - b.size;
        BigInt novo;
        novo.size = size;

        //Bits do meu novo até o offset setados com 0:
        for (int j = 0; j < offset; j++) {
            novo.number[j] = 0; 
        }
        //Bits do offset até size do meu novo com os bits do b:
        for (int j = offset; j < size; j++) {
            novo.number[j] = b.number[j - offset];
        }

        b = novo;
    }

    for(int i = 0; i < c.size; i++)
    {
        int x = 0;
        if(i < size) x += number[i];
        if(i < b.size)
    {
            if(number[i] >= b.number[i])
            x -= b.number[i];
            else {
            x += 10 - b.number[i];
            number[i+1]--;
            }
    }
        c.number[tam++] = x;
    }

    return c;
}


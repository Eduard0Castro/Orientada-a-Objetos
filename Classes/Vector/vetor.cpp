#include <iostream>
#include "vetor.h"

using namespace std;

CVetor::CVetor(){
    m_tam = 2;
    m_vet = new double [m_tam];
    m_vet[0] = 2;
    m_vet[1] = 2;
}

CVetor::CVetor(int tam){

    m_tam = tam;
    m_vet = new double[m_tam];
    for(int i = 0; i < m_tam; i++){
        m_vet[i] = 0;
    }
}

void CVetor::Atribui(int index, double valor){
    m_vet[index] = valor;
}

double CVetor::Conteudo(int index){
    return m_vet[index];
}

double CVetor::Maximo(void){
    double maior = m_vet[0];
    for(int i = 0; i < m_tam; i++){
        if(m_vet[i] > maior)
            maior = m_vet[i];
    }

    return maior;
}

double CVetor::Primeiro(void){
    return m_vet[0];
}

double CVetor::Ultimo(void){
    return m_vet[m_tam-1];
}

double& CVetor::operator[](int index){
    return m_vet[index];
}
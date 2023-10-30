#include <iostream>
#ifndef VETOR_H
#define VETOR_H

using namespace std;

const int inicio=0;

class CVetor{

private:
	double* m_vet;		
	int   m_tam; 		
public:
    CVetor();
	CVetor (int);	
    ~CVetor() {delete [] m_vet;}
    
	void Atribui(int index, double valor); 
	double Conteudo(int index);	
	double Maximo(void);
	double Primeiro(void);
	double Ultimo(void);
    double& operator[](int);


    friend ostream& operator << (ostream& out, CVetor& v){
        for(int i = 0; i < v.m_tam - 1; i++ )
            out << v.m_vet[i] << ", ";

        
        cout << v.m_vet[v.m_tam -1];
        cout << endl;
        return out;
    }

    friend istream& operator >> (istream& in, CVetor& v){
        string p;
        in >> p;
        v.m_tam = p.length();
        v.m_vet = new double[v.m_tam];
        
        for(int j = 0; j < v.m_tam; j++)
            v.m_vet[j] = stod(p.substr(j, 1));

        cout << endl;
        return in;

    }
};  
#endif
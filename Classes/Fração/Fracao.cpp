#include "Fracao.h"
#include <iostream>

using namespace std;

// Métodos Protegidos da classe CFracao
CFracao CFracao::Reduzida(void){

    int gcd = 1;
    int minimo = m_numerador;

    if (m_numerador > m_denominador)
        minimo = m_denominador;

    for(int i = 1; i <= minimo; i++)
        {
            if ((m_numerador%i == 0) && (m_denominador%i == 0))
            gcd = i;
        }

    m_numerador /= gcd;
    m_denominador /= gcd;

    return (*this);
}



// Retorna uma nova Fracao que é a soma do receptor com _Fracao;Mesmo para os outros
CFracao CFracao::Somar(CFracao _Fracao)
{
    CFracao temp( m_numerador*_Fracao.m_denominador +
                  m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador);
    
    return temp.Reduzida();
}


CFracao CFracao::Subtrair(CFracao _Fracao){
    CFracao temp(m_numerador*_Fracao.m_denominador -
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador);

    return temp.Reduzida();
}


CFracao CFracao::Multiplicar(CFracao _Fracao){
    CFracao temp(m_numerador*_Fracao.m_numerador,
                 m_denominador*_Fracao.m_denominador );

    return temp.Reduzida();
}

CFracao CFracao::Dividir(CFracao _Fracao)
{
    CFracao temp(m_numerador*_Fracao.m_denominador,
                 m_denominador*_Fracao.m_numerador );

    return temp.Reduzida();
}


// Devolve verdadeiro se receptor for menor que _Fracao; Mesmo para os outros
int CFracao::MenorQue(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador <
            m_denominador*_Fracao.m_numerador );
}

int CFracao::MaiorQue(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador >
            m_denominador*_Fracao.m_numerador );
}

int CFracao::Igual(CFracao _Fracao)
{
    return (m_numerador*_Fracao.m_denominador ==
            m_denominador*_Fracao.m_numerador );
}


// Devolve o valor da fração como float
float CFracao::ComoFloat(void)
{
    return ((float)m_numerador/(float)m_denominador);
}


// Mostrar o receptor no formato m_numerador/m_denominador
void CFracao::Print(void)
{
    cout << m_numerador << "/" << m_denominador;
}

CFracao CFracao::operator+(CFracao& _Fracao){
   
    CFracao temp( m_numerador*_Fracao.m_denominador +
                  m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador);
    
    return temp.Reduzida();
}

CFracao CFracao::operator-(CFracao& _Fracao){

    CFracao temp(m_numerador*_Fracao.m_denominador -
                 m_denominador*_Fracao.m_numerador, m_denominador*_Fracao.m_denominador);

    return temp.Reduzida();
}

CFracao CFracao::operator*(CFracao& _Fracao){

    CFracao temp(m_numerador*_Fracao.m_numerador,
                 m_denominador*_Fracao.m_denominador );

    return temp.Reduzida();
    
}

CFracao CFracao::operator/(CFracao& _Fracao){

    CFracao temp(m_numerador*_Fracao.m_denominador,
                 m_denominador*_Fracao.m_numerador );

    return temp.Reduzida();

}

//Comparação de CFracaos:
string CFracao::operator<(CFracao& n){
    if((m_numerador*n.m_denominador) < (m_denominador*n.m_numerador)) return "Sim";
    return "Não";
}
string CFracao::operator>(CFracao& n){
    if((m_numerador*n.m_denominador) > (m_denominador*n.m_numerador)) return "Sim";
    return "Não";
}
string CFracao::operator<=(CFracao& n){
    if((m_numerador*n.m_denominador) <= (m_denominador*n.m_numerador)) return "Sim";
    return "Não";

}
string CFracao::operator>=(CFracao& n){
    if((m_numerador*n.m_denominador) >= (m_denominador*n.m_numerador)) return "Sim";
    return "Não";
}
string CFracao::operator==(CFracao& n){
    if((m_numerador*n.m_denominador) == (m_denominador*n.m_numerador)) return "Sim";
    return "Não";
}
string CFracao::operator!=(CFracao& n){
    if((m_numerador*n.m_denominador) != (m_denominador*n.m_numerador)) return "Sim";
    return "Não";
}


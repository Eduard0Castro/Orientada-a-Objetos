#ifndef ID_CFRACAO
#define ID_CFRACAO

using namespace std;

class CFracao
{
    protected:
        int m_numerador;
        int m_denominador;

        //Responde ao receptor com o mínimo denominador comum
        CFracao Reduzida(void);

    public:

        //Construtor sem parametros inline
        CFracao(void){
            m_numerador = 1;
            m_denominador = 1;
        }

        CFracao(int Num, int Denom) : m_numerador{Num},
                                    m_denominador{Denom} { };
        
        CFracao(const CFracao& f) // Construtor de copia
        {
            m_numerador = f.m_numerador;
            m_denominador = f.m_denominador;
        }

        ~CFracao(void){ };
    
        //Métodos de acesso
        int getNumerador(void) { return m_numerador; }
        int getDenominador(void) { return m_denominador; }
        
        //Métodos aritméticos
        CFracao Somar(CFracao _F); //Soma do receptor com _F
        CFracao Subtrair(CFracao _F);
        CFracao Multiplicar(CFracao _F);
        CFracao Dividir(CFracao _F);

        //Métodos de comparação
        int MenorQue(CFracao _Fracao);
        int MaiorQue(CFracao _Fracao);
        int Igual(CFracao _Fracao);
    
        //Método de conversão
        float ComoFloat(void);
        
        void Print(void);

        //Sobrecarga de operadores para métodos aritméticos:
        CFracao operator + (CFracao&);
        CFracao operator - (CFracao&);
        CFracao operator * (CFracao&);
        CFracao operator / (CFracao&);

        //Sobrecarga de operadores de comparação:
        string operator < (CFracao&);
        string operator > (CFracao&);
        string operator <= (CFracao&);
        string operator >= (CFracao&);
        string operator == (CFracao&);
        string operator != (CFracao&);

        //Sobrecarga de operadores de entrada e saída por funções friend:
        friend ostream& operator << (ostream& out, CFracao& frac){
            out << frac.m_numerador << "/" << frac.m_denominador;

            return out;
        }
        friend istream& operator >> (istream& in, CFracao& frac){
           
            in >> frac.m_numerador >> frac.m_denominador;

            return in;
        }
};
#endif
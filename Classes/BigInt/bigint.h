#ifndef BIGINT_H
#define BIGINT_H

using namespace std;
class BigInt {

    private:
        int number[31];
        int size;
    
    public:

        BigInt();
        BigInt(int);
        ~BigInt(){}

        void Read();
        void Print();
        BigInt Soma(BigInt);
        BigInt Sub(BigInt);

        //Sobrecarga de operadores aritméticos:
        BigInt operator + (BigInt&);
        BigInt operator - (BigInt&);

        //Sobrecarga de operadores de comparação: 
        string operator<(BigInt&);
        string operator>(BigInt&);
        string operator<=(BigInt&);
        string operator>=(BigInt&);
        string operator==(BigInt&);
        string operator!=(BigInt&);

        bool palindromo();

        //Funções friend para sobrecarga de operadores de entrada e saída:
        friend ostream& operator<<(ostream& out, BigInt& n){

            for (int i = 0; i < n.size; i++)
                out << n.number[i];
            
            return out;
        }

        friend istream& operator >> (istream& in, BigInt& n){
            string p;
            in >> p;
       

            n.size = p.length();

            for (int i = 0; i < n.size; i++)
                n.number[i] = p[i] - '0';
                
            return in;        
        }

};

#endif
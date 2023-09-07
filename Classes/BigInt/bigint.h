#ifndef BIGINT_H
#define BIGINT_H

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

};


#endif
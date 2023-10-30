#include <iostream>
#include <stdexcept>
#include <exception>

using namespace std;

class Zero_Exception: public runtime_error{
    public:
        Zero_Exception(): runtime_error("Não se divide por zero! Tende ao infinito!"){}
};


double quociente(double x, double y){
    if (y == 0)
        throw Zero_Exception();
       
    return x/y;
}

int main(){
    double num;
    double den;

    cout << "Digite um valor para o numerador e denominador respectivamente: ";
    cin >> num >> den;
    try{
        quociente(num, den);
        cout << "Passou direto" << endl;
    }
    //Para os meus catches, primeiro coloco os mais específicos e depois os mais gerais:
    catch (Zero_Exception &ex){
        cout << "Ocorreu um erro! 'Z' " << ex.what() << endl;
        while (den == 0){
        cout << "Entre com os valores novamente: ";
        cin >> num >> den;
        }
    }
    catch (runtime_error &ex){
        cout << "Entrou em runtime_error!" << ex.what() << endl;
    }

    catch (exception &ex){
        cout << "Exceção geral!"<< endl;
    }
    cout << endl;
    cout << "Valores válidos para o numerador e denominador!" << endl;
    cout << "Resultado: " << quociente(num, den) << endl; 

}
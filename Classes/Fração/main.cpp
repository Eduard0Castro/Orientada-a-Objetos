#include <iostream>
#include "Fracao.h"

using namespace std;
int main(){
// ( 8 )
CFracao f1(8, 4);
cout << "Numerador F1 = " << f1.getNumerador() << endl;
cout << "Denominador F1 = " << f1.getDenominador() << endl << endl;

CFracao f2(4, 2);
cout << "Numerador F2= " << f2.getNumerador() << endl;
cout << "Denominador F2= " << f2.getDenominador() << endl << endl;

CFracao f3 = f1.Somar(f2);
cout << "Soma = "; f3.Print(); cout << endl;

f3 = f1.Subtrair(f2);
cout << "Subtrair = "; f3.Print(); cout << endl;

f3 = f1.Multiplicar(f2);
cout << "Mult = "; f3.Print(); cout << endl;

f3 = f1.Dividir(f2);
cout << "Div = ";f3.Print(); cout << endl;

if(f1.MenorQue(f2)){
cout << "Menor = "; f1.Print();
}
else{
cout << "Menor = "; f2.Print();
}
if(f1.MaiorQue(f2)){
cout << "Maior = "; f1.Print();
}else{
cout << "Maior = "; f2.Print();
}
if(f1.Igual(f2)){
cout << "Iguais" << endl;
}else cout << "Not iguais" << endl;
cout << "Float = " << f3.ComoFloat();
f3.Print();
return 0;
}

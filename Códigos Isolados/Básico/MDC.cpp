#include <iostream>

using namespace std;

int mdc(int x, int y);

int main(){

    int x, y;

    cout << "Digite dois números inteiros para descobrir seu mdc: ";
    cin >> x >> y;
    cout << mdc(x, y) << endl;
}

int mdc (int x, int y){
    return y ? mdc(y, x%y) : abs(x);
}

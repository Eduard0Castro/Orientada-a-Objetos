#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<float> jango;
    priority_queue<string> palavras;


    jango.push(45.9);
    jango.push(85.45);
    jango.push(63.4);
    jango.push(50.12);

    palavras.push("X");
    palavras.push("K");
    palavras.push("B");
    palavras.push("E");

    while(!palavras.empty()){
        cout << palavras.top() << " ";
        palavras.pop();
    }

    cout << endl;
    for (int i = jango.size(); i > 0; i--){
        cout << jango.top() << " ";
        jango.pop();
    }

    //Me parece que não remove o último elemento.
    
    cout << "\n" << jango.top();
    cout << endl;

    return 0;

}
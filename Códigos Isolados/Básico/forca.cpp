#include <iostream>

using namespace std;

int main(){
    
    char palavra[30], secreta[30];
    char letra;
    int i = 0, acertos = 0, chances = 6, tam = 0;
    bool acerto;

    cout << "Digite a palavra: ";
    cin >> palavra;
    system("clear");


    while(palavra[i] != '\0'){
        i++;
        tam++;

    }

    for (i = 0; i < tam; i++){
        secreta[i] = '-';
    }
    while (true){

        cout << "\nChances restantes: " << chances << endl;
        cout << "Acertos: " << acertos << endl;

        cout << "Palavra: " << secreta << endl;

        cout << "Digite a letra para o jogo de forca: ";
        cin >> letra;
        acerto = false;
    
        for (int j = 0; j < tam; j++){
        
            
            if (letra == palavra[j] && letra != secreta[j]){
                acertos += 1;
                acerto = true;
                secreta[j] = palavra[j];
            }
        }

        if (acerto == false)
            chances -=  1;

        if (chances == 0){
            cout << "Voce perdeu!\n";
            break;
        }

        if (acertos == tam)
        {            
            cout << "Voce venceu!\n";
            break;
        }
    }

    return 0;
}
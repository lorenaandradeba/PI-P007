
#include <iostream>
using namespace std;
int main(void){
    string numeroDigitado="" ;
    string numeroInvertido="";
    char numeros[30]; 
    cout<<"Digite um numero:";
    cin.getline(numeros, 30);
    for (int i = 0; i < sizeof(numeros) && numeros[i] !='\0'; i++)
    {
        numeroDigitado += numeros[i];
        numeroInvertido = numeros[i] + numeroInvertido;
    }

    int numD = stoi(numeroDigitado);
    int numI = stoi(numeroInvertido);
    if (numeroDigitado == numeroInvertido)
        cout<<"O numero digitado é palindromo"<<endl;
    else
        cout<<"O numero digitado eh não é palindromo"<<endl;

return 0;
}
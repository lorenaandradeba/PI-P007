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
    if (numeroDigitado == numeroInvertido)
        cout<<"O numero digitado eh Palindromo"<<endl;
    
return 0;
}
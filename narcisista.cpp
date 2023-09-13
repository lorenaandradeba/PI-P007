#include <iostream>
#include <math.h>

using namespace std;
int main(){

    int numero;

    cout<<"Digite o um número: ";
    cin>>numero;

    //Todos os inteiros de 1 a 9 são narcisistas.
    if(numero>=0 && numero<=9)
        cout<<"O "<<numero<<" é um número narcisista."<<endl;
    else{
        //verifica quantos caracteres tem o numerro
        string tmp;
        int quantosDigitos;
        tmp = to_string(numero);
        quantosDigitos= tmp.size();

        int soma=0;

        for (int i = 0; i <quantosDigitos ; i++)
        {
            int digito = stoi(tmp.substr(i,1));
            soma += pow(digito, quantosDigitos);
        }
        if (soma==numero)
            cout<<"O "<<numero<<" é um número narcisista."<<endl;
        else
            cout<<"O "<<numero<<" não é um número narcisista. A Soma é: "<<soma<<endl;


            
    }
    

      
    return 0;
}
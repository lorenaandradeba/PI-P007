#include <iostream>
using namespace std;
int main(){
    int numero;
    int soma = 0;
    cout<<"Digite um numero: ";
    cin>>numero;
    for (int i = 1; i <= numero; i++)
    {
        if((numero==i)){
            cout<<"O "<<numero;
            if(soma==numero)
                cout<<" é um número perfeito"<<endl;
            else
                cout<<" não é um número perfeito. A soma de seus divisores deu: "<<soma<<endl;
        }else if((numero%i)==0){
            soma+=i;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;
int main(void){
    string numero = "";
    bool acertou = false;
    int v1 = 0;  
    int numeroI=0;
    srand (time(NULL));

    v1 = rand() % 100 + 1;
    cout<<"Digite um numero entre 0 e 100. Digite -1 para sair."<<endl;
    do
    {
        cin>>numero;
      
        int numeroI = stoi(numero);   
        if (numeroI > 0){
            if (v1<numeroI)
                cout<<"Meu numero é menor que "<<numero<<endl;
            else if(v1>numeroI)
                cout<<"Meu numero é maior que "<<numero<<endl;
            else{
                cout<<"Parabens!!! Voce acertou."<<endl;
                acertou=true;
                break;
            }
        }

    } while (numero!="-1");
    if (numero=="-1")
        cout<<"Que pena você desistiu! Tente novamente. O número era: "<<v1<<endl;
return 0;
}
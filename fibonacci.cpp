#include <iostream>
using namespace std;
int main(){

    int n;
    long int ultimo = 1;
    long int penultimo = 1;
    long int numeroDaSequencia;
    cout<<"Digite o n da sequencia Fibonacci: ";
    cin>>n;

    if (n<=1)
        cout<<"O n deve ser maior que 2"<<endl;
    else if (n==2)
        cout<<0<<", "<<1<<", "<<1<<endl;
    else{
        cout<<0<<", "<<1<<", "<<1<<", ";

        for (int i = 3; i <= n; i++)
        {
                numeroDaSequencia=ultimo + penultimo;
                ultimo=penultimo;
                penultimo=numeroDaSequencia;

                cout<<numeroDaSequencia;
                if (i==n)
                    cout<<endl;
                else
                    cout<<", ";
                
        }
    }


      
    return 0;
}
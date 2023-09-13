#include <iostream>
using namespace std;
int main(void){
    int numero=0;
    cout<<"Digite um numero:";
    cin>>numero;
    cout<<"Os divisores do numero "<<numero<<" são:"<<endl;
    for (int i = 1; i <= numero; i++)
    {
        if((numero==i))
            cout<<i<<endl;
        if((numero%i)==0){
            cout<<i<<", ";
        }
    }
           
    
return 0;
}
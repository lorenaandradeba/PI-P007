#include <iostream>
using namespace std;
int main(){
    int altura;

    cout<<"Digite a altura desejada: ";
    cin>>altura;
    char caracter = 'A';
    int quantasLinhas = 1;

    for (int i = 1; i <= altura ; i++)
    {
        for (int j = 1; j <= quantasLinhas; j++)
        {
            cout<<caracter;
            caracter++;
        }
        cout<<endl;
        quantasLinhas++;
    }

    return 0;
}
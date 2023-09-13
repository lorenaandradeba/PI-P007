#include <iostream>
using namespace std;
int main(){
    int altura;

    cout<<"Digite a altura desejada: ";
    cin>>altura;
    for (int i = 1; i <= altura ; i++)
    {
        for (int j = 1; j <= altura; j++)
        {
            if (i==1 || i==altura)
                cout<<"*"<<" ";
            else{
                if (j==1 || j==altura)
                    cout<<"*"<<" ";
                else
                    cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}
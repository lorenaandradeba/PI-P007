#include <iostream>
using namespace std;
int main(void){
    int quantosDivisores=0;
    cout<<"Os numeros primos de 1 a 100 sao:"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        quantosDivisores=0;
            for (int n = 1; n <= i; n++)
            {
                if((i%n)==0)
                    quantosDivisores++;
            }
    if (quantosDivisores==2)
        cout<<i<<", ";
     
    }
           
    
return 0;
}
#include <iostream>
#include <iomanip>
#include <math.h>  

using namespace std;
int main(void){
    char continuar=1;
    float nota1, nota2, nota3, media;
    int indiceAluno = 0;
    float alunos[40][4];
    float matricula=0;
 do
 {
    //matricula[indiceAluno] = "2023.T01." + indiceAluno;
    cout<<"Digite a matricula do aluno:"<<endl;
    cin>>alunos[indiceAluno][0];
    cout<<"Digite a nota 1:"<<endl;
    cin>>alunos[indiceAluno][1];
    cout<<"Digite a nota 2:"<<endl;
    cin>>alunos[indiceAluno][2];
    cout<<"Digite a nota 3:"<<endl;
    cin>>alunos[indiceAluno][3];
    
    indiceAluno++;
    cout<<"Para sair digite s"<<endl;
    cin>>continuar;
    
 } while (continuar != 's');
 
 cout<<"MATRICULA"<<"\t"<<"NOTA 1"<<"\t"<<"NOTA 2"<<"\t"<<"NOTA 3"<<"\t"<<"MEDIA"<<endl;
 cout<<"====================================================================="<<endl;
 for (int i = 0; i < indiceAluno; i++)
 {
    matricula = alunos[i][0];
    nota1 = alunos[i][1];
    nota2 = alunos[i][2];
    nota3 = alunos[i][3];
    media = ((nota1+nota2+nota3)/3);
    cout<<matricula<<"\t\t"<<setprecision(2)<<nota1<<"\t"<<setprecision(2)<<nota2<<"\t"<<setprecision(2)<<nota3<<"\t"<<setprecision(2)<<media<<endl;
 }
 
    
return 0;
}
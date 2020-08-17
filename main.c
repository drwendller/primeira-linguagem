#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define BimestreAnual 4
#define NumeroAluno 4

int main(void){
  
   setlocale(LC_ALL,"portuguese");

   int a,n;
   float NA[NumeroAluno][BimestreAnual];
   float MA[NumeroAluno];
   char nome [100];

   printf("\n=========================aluno===============================\n");
   printf("insira o nome do aluno %d:\n",a+1);
   scanf("%s",nome);
   printf("insira a nota bimestral do %s :\n",nome);
 
    for(int a=0;a<NumeroAluno;++a){
     for(int n=0;n<BimestreAnual;++n){
       scanf("%f",&NA[a][n]);
       MA[a]+=NA[a][n];
      } 
       if(a<3){
       MA[a]/=4;
       printf("insira o nome do aluno %d:\n",a+2);
       scanf("%s",nome);
       printf("insira a nota bimestral do %s :\n",nome);
       }
    }
      printf("===============================MEDIA===================================\n");
        for(int a=0;a<NumeroAluno;++a){
        printf("a media do aluno %s e %.2f \n",nome,MA[a]); 
        if (MA[a]>=60){
        printf("o aluno %s foi APROVADO\n",nome);
        }else{
        printf("o aluno %s foi REPROVADO\n",nome);
        }  
      }

  return 0;
}

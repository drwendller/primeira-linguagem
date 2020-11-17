//Single.TryParse ( v , out NA[aluno,nota]);
#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define BimestreAnual 4
#define TotalDeAlunos 4

int main(void){
  
   int aluno,nota;
   float NA[TotalDeAlunos][BimestreAnual];
   float MA[TotalDeAlunos];
   char nome[TotalDeAlunos][100];

   printf("\n=========================aluno===============================\n");
   for(int aluno=0;aluno<1;++aluno){
   printf("insira o nome do aluno %d:\n",aluno+1);
   scanf("%s",nome[TotalDeAlunos]);
   printf("insira a nota bimestral do %s :\n",nome);
   }
 
    for(int aluno=0;aluno<TotalDeAlunos-1;++aluno){
     for(int nota=0;nota<BimestreAnual;++nota){
       scanf("%f",&NA[aluno][nota]);
       MA[aluno]+=NA[aluno][nota];
      } 
      MA[aluno]/=4;
        
       printf("insira o nome do aluno %d:\n",aluno+2);
       scanf("%s",*nome);
       printf("insira a nota bimestral do %s :\n",*nome);
       }
     
    
      printf("===============================MEDIA===================================\n");
      for(int aluno=0;aluno<TotalDeAlunos;++aluno){
        printf("a media do aluno %s e %.2f \n",*nome,MA[aluno]); 
        if (MA[aluno]>=60){
        printf("o aluno %s foi APROVADO\n",*nome);
        }else{
        printf("o aluno %s foi REPROVADO\n",*nome);
        }  
      }
    

  return 0;
}

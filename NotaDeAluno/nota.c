#include <stdio.h>

int main (){

  int index;

  char * nomesAlunos [3] [3] = {
    {"Aluno0","Pt:50","Mat:30"},
    {"Aluno1","Pt:40","Mat:90"},
    {"Aluno2","Pt:60","Mat:60"}
  };

    printf("Digite o número do aluno:\n");
    printf("Aluno 0, digite 0\n");
    printf("Aluno 1, digite 1\n");
    printf("Aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do Aluno %s são: %s , %s ...", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

  
  return 0;
} 
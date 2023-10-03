#include <stdio.h>

int main(void) {

  // n = nota
  int N1;
  int N2;

  printf("Calculador de nota\n \n");

  printf("Digite a primeira nota do aluno: ");
  scanf("%d", &N1);

  while (N1 < 0 || N1 > 100) {
    printf("A nota do aluno tem que estar entre 0 e 100\n");
    printf("Digita a primera nota do aluno: ");
    scanf("%d", &N1);
  }

  printf("Digite a segunda nota do aluno: ");
  scanf("%d", &N2);

  while (N2 < 0 || N2 > 100) {
    printf("A nota do aluno tem que estar entre 0 e 100\n");
    printf("Digita a segunda nota do aluno: ");
    scanf("%d", &N2);
  }

  int média = (N1 + N2) / 2;

  printf("a média foi %d \n", média);

  if (média >= 70) {
    printf("Aluno aprovado!");
  } else if (média >= 40 && média <= 69) {
    int exame;

    printf("Digite a nota do exame do aluno: ");
    scanf("%d", &exame);

    while (exame < 0 || exame > 100) {
      printf("A nota do aluno tem que estar entre 0 e 100\n");
      printf("Digite a nota do exame do aluno: ");
      scanf("%d", &exame);
    }

    if (exame + média < 100) {
      printf("Reprovado");
    } else if (exame + média >= 100) {
      printf("Aprovado");
    }

  } else {
    printf("O aluno está reprovado.");
  }

  return 0;
}
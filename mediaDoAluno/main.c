#include <stdio.h>

float mediaCom3(float N1, float N2, float N3);
float mediaCom2(float N1, float N2);
int main(void) {

  // n = nota
  float N1;
  float N2;
  float N3;
  float maiorNota;
  float menorNota;

  printf("Calculdadora de notas \n");

  printf("Digite a primeira nota do aluno: ");
  scanf("%f", &N1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f", &N2);

  printf("Digite a terceira nota do aluno: ");
  scanf("%f", &N3);

  // printf("%.1f ", N3);
  // printf("%.1f ", N2);
  // printf("%.1f \n", N1);

  // calcular a média dos 3;
  float media3;
  media3 = mediaCom3(N1, N2, N3);
  printf("a média das 3 notas é: %.1f \n", media3);

  float media2;

  // verificação de quem é o menor número
  if (N1 < N2 && N1 < N3) {
    menorNota = N1;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N3, N2));
    printf("a menor nota foi: %.1f\n", menorNota);
  } else if (N2 < N1 && N2 < N3) {
    menorNota = N2;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N1, N3));
    printf("a menor nota foi: %.1f\n", menorNota);
  } else if (N3 < N1 && N3 < N2) {
    menorNota = N3;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N1, N2));
    printf("a menor nota foi: %.1f\n", menorNota);
  } else if (N1 == N2 && N1 < N3) {
    menorNota = N1;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N2, N3));
    printf("a menor nota foi: %.1f\n", menorNota);
  } else if (N1 == N3 && N1 < N2) {
    menorNota = N1;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N2, N3));
    printf("a menor nota foi: %.1f\n", menorNota);
  } else if (N2 == N3 && N2 < N1) {
    menorNota = N2;
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N2, N1));
    printf("a menor nota foi: %.1f\n", menorNota);
  }

  // caso tenha notas iguais
  if (N1 == N2 && N1 == N3) {
    printf("A media com as duas melhores notas foi: %.1f\n", mediaCom2(N1, N2));
    printf("A menor nota foi: %.1f\n", N2);
    printf("A maiot nota foi: %.1f\n", N2);
  }
  
  // verficação de quem é o maior número
  if (N1 > N2 && N1 > N3) {
    maiorNota = N1;
    printf("A maior nota foi: %.1f", maiorNota);
  } else if (N2 > N1 && N2 > N3) {
    maiorNota = N2;
    printf("A maior nota foi: %.1f", maiorNota);
  } else if (N3 > N1 && N3 > N2) {
    maiorNota = N3;
    printf("A maior nota foi: %.1f", maiorNota);
  }

  return 0;
}

float mediaCom3(float N1, float N2, float N3) {
  float media = (N1 + N2 + N3) / 3;
  return media;
}
float mediaCom2(float N1, float N2) {
  float media = (N1 + N2) / 2;
  return media;
}
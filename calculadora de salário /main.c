#include <stdio.h>

float salarioLiquido(float salarioBruto, float dINSS);

int main() {

  float horaAula;
  int QAula;
  float dINSS;
  float Salário;

  printf("Calculadora de salárion\n\n");

  printf("Quanto vale a hora aula? ");
  scanf("%f", &horaAula);

  printf("Quantas aulas foram dadas pelo professor? ");
  scanf("%d", &QAula);

  printf("Quantas o desconto do inss em % ? ");
  scanf("%f", &dINSS);

  float salarioBruto = horaAula * QAula;
  printf("o salário líquido é de R$%.2f", salarioLiquido(salarioBruto, dINSS));
  
  return 0;
}
float salarioLiquido(float salarioBruto, float dINSS) {

  float salarioLiquido = salarioBruto - ((salarioBruto * dINSS) / 100);

  return salarioLiquido;
}
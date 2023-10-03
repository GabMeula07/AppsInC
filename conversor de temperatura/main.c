#include <stdio.h>

float cParaf(float tc);
float fparaC(float tf);

int main(void) { 
  //c de controle
  int c;
  //t de temperatura;
  float tc;
  float tf;
  
  printf("Escolha a medida de temperatura que deseja converte: \n digite 1 para Celsius \n digite 2 para Fahrenheit \n \n");

  scanf("%d", &c);

  while (c != 1 && c != 2){
    printf("opção inválida\n");
    printf("digite 1 para Célsius ou Digite 2 para Fahrenheit\n\n");
    scanf("%d", &c);
  }

  if ( c == 1){
    printf("Opção escolhida Célsius para Fahrenheit\n");
    printf("Digite a temperatura: ");
    scanf("%f", &tc);
    printf("A temperatura %.1fºC em Fahrenheit é %.1fºF",tc, cParaf(tc));
  }
  else if (c == 2){
    printf("Opção escolhida Fahrenheit para Célsius\n");
    printf("Digite a temperatura: ");
    scanf("%f", &tf);
    printf("A temperatura %.1fºf em Célsius é %.1fºC",tf, fparaC(tf));
  }
  
  return 0;
}

float cParaf(float tc){
  float tf = (9*tc/5) + 32;
  return tf;
}
float fparaC(float tf){
  float tc = 5*(tf-32)/9;
  return tc;
}
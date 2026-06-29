#include <stdio.h>

int main() {
  
  //variáveis das cidades
  
  char nomecarta1[15];
  char nomecarta2[15];
  char estadocarta1[3];
  char estadocarta2[3];
  int populacaocarta1;
  int populacaocarta2;
  float densidadecarta1;
  float densidadecarta2;
  float pibcarta1;
  float pibcarta2;
  float pibpercapitacarta1; 
  float pibpercapitacarta2;
  int pontosturisticoscarta1;
  int pontosturisticoscarta2;
  float areacarta1;
  float areacarta2;
  char codigocarta1[4];
  char codigocarta2[4];
  float superpodercarta1;
  float superpodercarta2;
  float densidadesuperpoder1;
  float densidadesuperpoder2;
  int resultadopopulacao;
  int resultadopib;
  int resultadopontosturisticos;
  int resultadoarea;
  int resultadosuperpoder;
  int resultadopibpercapita;
  int resultadodensidade;
  
  //printf e scanf da cidade1

  printf("Dados da cidade 1:\n");

  printf("Digite o nome da cidade:\n");
  scanf("%s", nomecarta1);

  printf("digite o estado da cidade com uma letra de A a H:\n");
  scanf("%s", estadocarta1);

  printf("digite o numero de habitantes:\n");
  scanf("%d", &populacaocarta1);

  printf("digite o PIB:\n");
  scanf("%f", &pibcarta1);

  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosturisticoscarta1);

  printf("Digite a area em km:\n");
  scanf("%f", &areacarta1);

  printf("digite um codigo para a cidade, sendo ele a letra escolhida pra o estado e um numero de 01 a 04:\n");
  scanf("%s", codigocarta1);

  //printf e scanf da cidade2

  printf("Dados da cidade 2:\n");
  
  printf("Digite o nome da cidade:\n");
  scanf("%s", nomecarta2);

  printf("digite o estado da cidade com uma letra de A a H:\n");
  scanf("%s", estadocarta2);

  printf("digite o numero de habitantes:\n");
  scanf("%d", &populacaocarta2);

  printf("digite o PIB:\n");
  scanf("%f", &pibcarta2);

  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosturisticoscarta2);

  printf("Digite a area em km:\n");
  scanf("%f", &areacarta2);

  printf("digite um codigo para a cidade, sendo ele a letra escolhida pra o estado e um numero de 01 a 04:\n");
  scanf("%s", codigocarta2);

  //calculo do PIB per capita e densidade da cidade1 e cidade2
  
  pibpercapitacarta1 = (float) pibcarta1 / populacaocarta1;

  pibpercapitacarta2 = (float) pibcarta2 / populacaocarta2;

  densidadecarta1 = (float) populacaocarta1 / areacarta1;

  densidadecarta2 = (float) populacaocarta2 / areacarta2;

  //calculo super poder

  densidadesuperpoder1 = 1 * densidadecarta1;
  
  densidadesuperpoder2 = 1 * densidadecarta2;

  superpodercarta1 = (float) populacaocarta1 + pibcarta1 + areacarta1 + pontosturisticoscarta1 + pibpercapitacarta1 + densidadesuperpoder1;

  superpodercarta2 = (float) populacaocarta2 + pibcarta2 + areacarta2 + pontosturisticoscarta2 + pibpercapitacarta2 + densidadesuperpoder2;
  
  //exibição dos dados da cidade1

  printf("Dados da cidade 1:\n");

  printf("nome: %s\n", nomecarta1);

  printf("estado: %s\n", estadocarta1);

  printf("Populacao: %.3d\n", populacaocarta1);

  printf("PIB: %.3f\n", pibcarta1);

  printf("Numero de pontos turisticos: %d\n", pontosturisticoscarta1);

  printf("area: %.2f\n", areacarta1);

  printf("Codigo: %s\n", codigocarta1);

  printf("PIB per capita: %.2f\n", pibpercapitacarta1);

  printf("Densidade demográfica: %.2f\n", densidadecarta1);

  printf("Super poder: %.2f\n", superpodercarta1);

  //exibição dos dados da cidade2

  printf("Dados da cidade 2:\n");

  printf("nome: %s\n", nomecarta2);

  printf("estado: %s\n", estadocarta2);

  printf("Populacao: %.3d\n", populacaocarta2);

  printf("PIB: %.3f\n", pibcarta2);

  printf("Numero de pontos turisticos: %d\n", pontosturisticoscarta2);

  printf("area: %.2f\n", areacarta2);

  printf("Codigo: %s\n", codigocarta2);

  printf("PIB per capita: %.2f\n", pibpercapitacarta2);

  printf("Densidade demográfica: %.2f\n", densidadecarta2);

  printf("Super poder: %.2f\n", superpodercarta2);

  //comparação valores cartas e super poder

  resultadopopulacao = populacaocarta1 > populacaocarta2;
  resultadopib = pibcarta1 > pibcarta2;
  resultadopontosturisticos = pontosturisticoscarta1 > pontosturisticoscarta2;
  resultadoarea = areacarta1 > areacarta2;
  resultadosuperpoder = superpodercarta1 > superpodercarta2;
  resultadopibpercapita = pibpercapitacarta1 > pibpercapitacarta2;
  resultadodensidade = densidadecarta1 < densidadecarta2;

  //printf dos resultados da comparação das cartas

  printf("Comparação das cartas:\n");
  printf("População: %d\n", resultadopopulacao);
  printf("PIB: %d\n", resultadopib);
  printf("Pontos Turísticos: %d\n", resultadopontosturisticos);
  printf("Área: %d\n", resultadoarea);
  printf("PIB per capita: %d\n", resultadopibpercapita);
  printf("Densidade demográfica: %d\n", resultadodensidade);
  printf("Super Poder: %d\n", resultadosuperpoder);

  return 0;

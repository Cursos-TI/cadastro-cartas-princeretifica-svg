#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // 1ª carta
  char Estado1;
  char codigo_1[3];
  char Cidade1[50];
  int Populacao1;
  float Area1; 
  float PiB1;
  int qtde_pontos_turisticos1;  

  // 2ª carta
  char Estado2;
  char codigo_2[3];
  char Cidade2[50];
  int Populacao2;
  float Area2; 
  float PiB2;
  int qtde_pontos_turisticos2;  

  // dados da 1ª carta
  printf("Digite o estado da cidade  : ");
  scanf(" %c", &Estado1);
  printf("Digite o codigo da carta : ");
  scanf(" %s ", codigo_1);
  printf("Digite o nome da cidade : ");
  scanf(" %s ", Cidade1);

  printf("Digite a populacao da cidade : ");

  scanf(" %d", &Populacao1);      

  printf("Digite a area da cidade : ");

  scanf(" %f", &Area1);      

  printf("Digite o PiB da cidade : ");

  scanf(" %f", &PiB1);      

  printf("Digite a quantidade de pontos turisticos da cidade : ");
  
  scanf(" %d", &qtde_pontos_turisticos1);

  


  // dados da 2ª carta
  printf("Digite o estado da cidade 2 : ");
  scanf(" %c", &Estado2);
  printf("Digite o codigo da carta 2: \n");
  scanf(" %s ", codigo_2);
  printf("Digite o nome da cidade 2: \n");
  scanf(" %s", Cidade2);
  printf("Digite a populacao da cidade 2: \n");
  scanf(" %d", &Populacao2);      
  printf("Digite a area da cidade 2: \n");
  scanf(" %f", &Area2);      
  printf("Digite o PiB da cidade 2: \n");
  scanf(" %f", &PiB2);      
  printf("Digite a quantidade de pontos turisticos da cidade 2: \n");
  scanf(" %d", &qtde_pontos_turisticos2); 



  //retorno das cartas
  printf("Carta 1 - %s (%s) - %c\n", Cidade1, codigo_1, Estado1);
  printf("Populacao: %d\n", Populacao1);
  printf("Area: %.2f\n", Area1);
  printf("PiB: %.2f\n", PiB1);      
  printf("Pontos Turisticos: %d\n", qtde_pontos_turisticos1);
} 

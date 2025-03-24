#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paulo Vitor dos Santos Bernardo - Nivel novato

int main() {
     //Variáveis da primeira carta

     char estado1[50]; //Variável estado da primeira carta
     char codigo1[50];// Variável código da primeira carta
     char nome_cidade1[50];//Variável cidade da primeira carta
     int populacao1;//Variável tamanho da população da primeira carta
     float area1;//Variável do tamanho da área da primeira carta
     float pib1;//Variável PIB da cidade da primeira carta
     int pontos_turisticos1;//Variáel número de pontos turísticos da primeira carta
 
     //Variáveis da segunda carta
     char estado2[50];//Variável estado da segunda carta
     char codigo2[50];// Variável código da segunda carta
     char nome_cidade2[50];//Variável cidade da segunda carta
     int populacao2;//Variável tamanho da população da segunda carta
     float area2;//Variável do tamanho da área da segunda carta
     float pib2;//Variável PIB da cidade da segunda carta
     int pontos_turisticos2;//Variáel número de pontos turísticos da seunda carta
 
     //Inserindo dados da primeira carta
 
     printf("Digite o nome do primeiro Estado: \n", estado1);
     scanf("%s", estado1);
 
     printf("Digite o códio da primeira carta: \n", codigo1);
     scanf("%s", &codigo1);
 
     printf("Digite o nome da primeira cidade: \n", nome_cidade1);
     scanf("%s", &nome_cidade1);
 
     printf("Digite a população da primeira cidade: \n", populacao1);
     scanf("%d", &populacao1);
 
     printf("Digite a área da primeira cidade: \n", area1);
     scanf("%f", &area1);
 
     printf("Digite o pib da primeira cidade: \n", pib1);
     scanf("%f", &pib1);
 
     printf("Digite o número de pontos turísticos da primeira carta: \n", pontos_turisticos1);
     scanf("%d", &pontos_turisticos1);
 
     printf("\n");
 
     //Inserindo dados da segunda carta
     printf("Digite o nome do segundo Estado: \n", estado2);
     scanf("%s", estado2);
 
     printf("Digite o código da segunda carta: \n", codigo2);
     scanf("%s", &codigo2);
 
     printf("Digite o nome da segunda cidade: \n", nome_cidade2);
     scanf("%s", &nome_cidade2);
 
     printf("Digite a população da segunda cidade: \n", populacao2);
     scanf("%d", &populacao2);
 
     printf("Digite a área da segunda cidade: \n", area2);
     scanf("%f", &area2);
 
     printf("Digite o pib da segunda cidade: \n", pib2);
     scanf("%f", &pib2);
     
     printf("Digite o número de pontos turísticos da segunda carta: \n", pontos_turisticos2);
     scanf("%d", &pontos_turisticos2);
 
     //Aqui exibindo na tela os dados das cartas
     //Primeira carta
 
     printf("\n");
     printf("Carta 1 \n");
 
     printf("Estado1: %s\n", estado1);
     printf("Código da Carta 1: %s\n", codigo1);
     printf("Nome da Cidade 1: %s\n", nome_cidade1);
     printf("População1: %d habitantes \n", populacao1);
     printf("Área 1: %f km²\n", area1);
     printf("PIB 1: R$ %f\n", pib1);
     printf("Número de pontos turísticos 1:%d\n", pontos_turisticos1);
 
     printf("\n");
     printf("Carta 2 \n");
 
     //Segunda carta
     printf("Estado2: %s\n", estado2);
     printf("Código da Carta 2: %s\n", codigo2);
     printf("Nome da Cidade 2: %s\n", nome_cidade2);
     printf("População2: %d habitantes \n", populacao2);
     printf("Área 2: %f km² \n", area2);
     printf("PIB 2: R$ %f\n", pib2);
     printf("Número de pontos turísticos 2: %d\n", pontos_turisticos2);

    return 0;
}

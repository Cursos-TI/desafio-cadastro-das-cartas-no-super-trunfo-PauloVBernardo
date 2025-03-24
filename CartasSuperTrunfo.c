#include <stdio.h>
#include <string.h> //necessário pedir para abrir essa biblioteca que possui a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Calculando Densidade Populacional e PIB per Capita
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paulo Vitor dos Santos Bernardo - Nivel aventureiro

int main() {
     //Declarando as variáveis das cartas 1 e 2

     char estado1[50], estado2[50]; //Variável estados 
     char codigo1[4], codigo2[4];// Variável códigos 
     char nome_cidade1[50], nome_cidade2[50];//Variável cidade
     int populacao1, populacao2;//Variável tamanho das populações
     float area1, area2;//Variável do tamanho das áreas 
     float pib1, pib2;//Variável PIB das cidades 
     int pontos_turisticos1, pontos_turisticos2;//Variáel número de pontos turísticos 
     float densidade1, densidade2; //Variável densidade populacional
     float pibcapta1, pibcapta2; //Variável pib per capta

     //Inserindo os dados da primeira carta
 
     printf("Digite o nome do primeiro Estado: \n");
     fgets(estado1, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     estado1[strcspn(estado1, "\n")] = 0;
      
     printf("Digite o código da primeira carta: \n");
     scanf("%s", &codigo1);

     getchar(); // Limpa o buffer, precisei inserir essa linha de código, pois o programa não estava lendo as linhas a seguir do nome da cidade
     //Assim, ele limpa o buffer e consigo resolver o problema
 
     printf("Digite o nome da primeira cidade: \n");
     fgets(nome_cidade1, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;
      
     printf("Digite a população da primeira cidade: \n");
     scanf("%d", &populacao1);
 
     printf("Digite a área da primeira cidade: \n");
     scanf("%f", &area1);
 
     printf("Digite o pib da primeira cidade: \n");
     scanf("%f", &pib1);
 
     printf("Digite o número de pontos turísticos da primeira carta: \n");
     scanf("%d", &pontos_turisticos1);
 
     printf("\n");

     //Aqui a linha de código vai fazer os cálculos da variável Densidade demográfica e atribuir seu valor à variável declarada "densidade1"
     densidade1 = (float) area1/populacao1;

     //Aqui a linha de código vai fazer os cálculos da variável PIB per Capta e atribuir seu valor à variável declarada "pibcapta1"
     pibcapta1 = (float) pib1/populacao1;

     getchar();

 
     //Inserindo os dados da segunda carta
     printf("Digite o nome do segundo Estado: \n");
     fgets(estado2, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     estado2[strcspn(estado2, "\n")] = 0;
      
     printf("Digite o código da segunda carta: \n");
     scanf("%s", &codigo2);

     getchar(); // Limpa o buffer
 
     printf("Digite o nome da segunda cidade: \n");
     fgets(nome_cidade2, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;
 
     printf("Digite a população da segunda cidade: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a área da segunda cidade: \n");
     scanf("%f", &area2);
 
     printf("Digite o pib da segunda cidade: \n");
     scanf("%f", &pib2);
     
     printf("Digite o número de pontos turísticos da segunda carta: \n");
     scanf("%d", &pontos_turisticos2);

     //Aqui a linha de código vai fazer os cálculos da variável Densidade demográfica e atribuir seu valor à variável declarada "densidade2"
     densidade2 = (float) area2/populacao2;

     //Aqui a linha de código vai fazer os cálculos da variável PIB per Capta e atribuir seu valor à variável declarada "pibcapta2"
     pibcapta2 = (float) pib2/populacao2;
 
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
     printf("Densidade demográfica: %f hab/km²\n", densidade1);
     printf("PIB per Capta: R$ %f\n", pibcapta1);
 
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
     printf("Densidade demográfica: %f hab/km²\n", densidade2);
     printf("PIB per Capta: R$ %f\n", pibcapta2);

     printf("novo cmomit/n");

    return 0;

}

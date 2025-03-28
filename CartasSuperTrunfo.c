#include <stdio.h>
#include <string.h> //necessário pedir para abrir essa biblioteca que possui a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Batalha de Cartas no Super Trunfo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paulo Vitor dos Santos Bernardo - Nivel mestre

#include <stdio.h>
#include <string.h> //necessário pedir para abrir essa biblioteca que possui a função strcspn

// Desafio Super Trunfo - Países
// Tema 1 - Cadastrando densidade demografica e PIB percapta
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paulo Vitor dos Santos Bernardo - Nivel aventureiro

int main() {
     //Declarando as variáveis das cartas 1 e 2

     char estado1[50], estado2[50]; //Variável estados 
     char codigo1[4], codigo2[4];// Variável códigos 
     char nome_cidade1[50], nome_cidade2[50];//Variável cidade
     unsigned long int populacao1, populacao2;//Variável tamanho das populações
     float area1, area2;//Variável do tamanho das áreas 
     float pib1, pib2;//Variável PIB das cidades 
     int pontos_turisticos1, pontos_turisticos2;//Variável número de pontos turísticos 
     float densidade1, densidade2; //Variável densidade populacional
     float pibcapta1, pibcapta2; //Variável pib per capta
     float superpoder1, superpoder2; //Nova variável que será a soma de todas as outras (ver detalhes para densidade)
     float inverso_densidade1, inverso_densidade2; //Nova variável que seró o cálculo do inverso do valor de densidade populacional

    printf("<><><><> BEM VINDO AO JOGO SUPER TRUNFO<><><><>\n");
    printf("--------PARA JOGAR, SIGA AS INSTRUÇÕES A SEGUIR---------\n");
    printf("\n");
    
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
      
     printf("Digite a população da primeira cidade:\n");
     scanf("%d", &populacao1);
 
     printf("Digite a área da primeira cidade:\n");
     scanf("%f", &area1);
 
     printf("Digite o pib da primeira cidade:\n");
     scanf("%f", &pib1);
 
     printf("Digite o número de pontos turísticos da primeira carta: \n");
     scanf("%d", &pontos_turisticos1);
 
     printf("\n");

     //Aqui a linha de código vai fazer os cálculos da variável Densidade demográfica e atribuir seu valor à variável declarada "densidade1"
     densidade1 = (float) area1/populacao1;

     //Calculando o inverso da densidade demográfica
     inverso_densidade1 = 1/densidade1;
     
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

     //Calculando o inverso da densidade demográfica
     inverso_densidade2 = 1/densidade2;

     //Aqui a linha de código vai fazer os cálculos da variável PIB per Capta e atribuir seu valor à variável declarada "pibcapta2"
     pibcapta2 = (float) pib2/populacao2;
     
     //Aqui a linha de código que vai calcular o superpoder1
     superpoder1 = (float) populacao1+area1+pib1+pontos_turisticos1+inverso_densidade1+pibcapta1;
     
     //Aqui a linha de código que vai calcular o superpoder2
     superpoder1 = (float) populacao2+area2+pib2+pontos_turisticos2+inverso_densidade2+pibcapta2;
     
     //Fazendo as comparações
     printf("Comparações de Cartas: \n");
     
     //População
     if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)");
     } else {
        printf("População: Carta 2 venceu (0)");
     }
     printf("\n");
     //Area
     if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)");
     } else {
        printf("Área: Carta 2 venceu (0)");
     }
     printf("\n");
     
     //PIB
     if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)");
     } else {
        printf("PIB: Carta 2 venceu (0)");
     }
     printf("\n");

     //Pontos turisticos
     if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)");
     } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)");
     }
     printf("\n");
     //Densidade
     if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)");
     } else {
        printf("Densidade Populacional: Carta 2 venceu (0)");
     }
     printf("\n");
     //PIB per capta
     if (pibcapta1 > pibcapta2) {
        printf("PIB per Capta: Carta 1 venceu (1)");
     } else {
        printf("PIB per Capta: Carta 2 venceu (0)");
     }
     printf("\n");
     //Superpoder
     if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu (1)");
     } else {
        printf("Super Poder: Carta 2 venceu (0)");
     }
     printf("\n");
     
          
     printf("Novo commit\n");

    return 0;

}

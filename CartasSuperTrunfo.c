#include <stdio.h>
#include <string.h> //necessário pedir para abrir essa biblioteca que possui a função strcspn

// Desafio Super Trunfo - Países
// Tema 2 - Nível novato - Comparando Cartas do Super Trunfo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paulo Vitor dos Santos Bernardo - Nivel novato

int main() {
     //Declarando as variáveis das cartas 1 e 2

     char estado1[50], estado2[50]; //Variável estados 
     char codigo1[10], codigo2[10];// Variável códigos 
     char nome_cidade1[50], nome_cidade2[50];//Variável cidade
     int populacao1, populacao2;//Variável tamanho das populações
     float area1, area2;//Variável do tamanho das áreas 
     float pib1, pib2;//Variável PIB das cidades 
     int pontos_turisticos1, pontos_turisticos2;//Variável número de pontos turísticos 
     float densidade1, densidade2; //Variável densidade populacional
     float pibcapta1, pibcapta2; //Variável pib per capta

    printf("<><><><> BEM VINDO AO JOGO SUPER TRUNFO<><><><>\n");
    printf("--------PARA JOGAR, SIGA AS INSTRUÇÕES A SEGUIR---------\n");
    printf("\n");
    
     //Inserindo os dados da primeira carta
 
     printf("Digite o nome do primeiro Estado: \n");
     fgets(estado1, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     estado1[strcspn(estado1, "\n")] = 0;
      
     printf("Digite o código da primeira carta: \n");
     scanf("%s", codigo1);

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

     //Aqui a linha de código vai fazer os cálculos da variável PIB per Capta e atribuir seu valor à variável declarada "pibcapta1"
     pibcapta1 = (float) pib1/populacao1;

     getchar();

 
     //Inserindo os dados da segunda carta
     printf("Digite o nome do segundo Estado: \n");
     fgets(estado2, 50, stdin); //inserindo a função fgets para que o programa possa ler nomes compostos com espaços
     estado2[strcspn(estado2, "\n")] = 0;
      
     printf("Digite o código da segunda carta: \n");
     scanf("%s", codigo2);

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
     //Fazendo as comparações
     printf("Comparações de Cartas: \n");
     
     //População
     printf("População\n Carta 1 - %s (%s): %d habitantes \n Carta 2 - %s (%s): %d habitantes \n", nome_cidade1, estado1, populacao1, nome_cidade2, estado2, populacao2);
     if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");
     //Area
     printf("Área\n Carta 1 - %s (%s): %.3f km²\n Carta 2 - %s (%s): %.3f km²\n", nome_cidade1, estado1, area1, nome_cidade2, estado2, area2);
     if (area1 > area2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");
     
     //PIB
     printf("PIB\n Carta 1 - %s (%s): %.3f bilhões de reais \n Carta 2 - %s (%s): %.3f bilhões de reais\n", nome_cidade1, estado1, pib1, nome_cidade2, estado2, pib2);
     if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");

     //Pontos turisticos
     printf("Número de pontos turísticos\n Carta 1 - %s (%s): %d \n Carta 2 - %s (%s): %d \n", nome_cidade1, estado1, pontos_turisticos1, nome_cidade2, estado2, pontos_turisticos2);
     if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");

     //Densidade
     printf("Densidade Populacional\n Carta 1 - %s (%s): %.2f hab/km² \n Carta 2 - %s (%s): %.2f hab/km² \n", nome_cidade1, estado1, densidade1, nome_cidade2, estado2, densidade2);
     if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");

     //PIB per capta
     printf("PIB per capta\n Carta 1 - %s (%s): %.2f de reais \n Carta 2 - %s (%s): %.2f de reais \n", nome_cidade1, estado1, pibcapta1, nome_cidade2, estado2, pibcapta2);
     if (pibcapta1 > pibcapta2) {
        printf("Resultado: Carta 1 venceu!");
     } else {
        printf("Resultado: Carta 2 venceu!");
     }
     printf("\n");
    
     printf("novo commit\n");

    return 0;

}

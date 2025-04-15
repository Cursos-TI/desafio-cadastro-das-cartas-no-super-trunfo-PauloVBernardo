#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 2 - Nível aventureiro - Interatividade no Super Trunfo
// 
//Teste Paulo Vitor dos Santos Bernardo - Nivel aventureiro

int main() {
     //Declarando as variáveis das cartas 1 e 2

     char pais1[50] = "Brasil", pais2[50] = "Argentina"; //Variável nome dos paísess 
     int populacao1 = 212000000, populacao2 = 45000000;//Variável tamanho das populações em milhões de habitantes
     float area1 = 8510295, area2 = 2780085;//Variável do tamanho das áreas dos países em km²
     float pib1 = 2170000000000, pib2 = 646000000000;//Variável PIB dos países em trilhoes para o primeiro e em bilhões para o segundo
     int pontos_turisticos1 = 40000, pontos_turisticos2 = 35000;//Variável número de pontos turísticos dos países 
     float densidade1, densidade2; //Variável densidade populacional dos países
     int opcao; //Variável para acomodar a escolha do atributo feita pelo usuário
    

     //Calculando a densidade populacional dos dois países
 
     densidade1 = (float) populacao1/area1;
   
     densidade2 = (float) populacao1/area2;
 
        //Inserindo uma mensagem inicial para o jogo
     printf("               ********************\n");
     printf("               *    -->SUPER<--   *\n");
     printf("               *    -->TRUNFO<--  *\n");
     printf("               *   <>  __   <>    *\n");
     printf("               *    |  ^♥   |     *\n");
     printf("               *   <>  __   <>    *\n");
     printf("               *                  *\n");
     printf("               ********************\n");
 
    printf("      <><><><> BEM VINDO AO JOGO SUPER TRUNFO<><><><>\n");
    printf("     --------ESCOLHA O ATRIBUTO QUE DESEJA COMPARAR---------\n");
    printf("\n");

    printf ("Escolha o atributo com o qual deseja competir\n");
    printf("1. Tamanho populacional dos países\n");
    printf("2. Tamanho da área geográfica dos países\n");
    printf("3. PIB (Produto Interno Bruto) dos países\n");
    printf("4. Densidade populacional dos países\n");
    printf("5. Número de pontos turísticos nos países\n");
    
    scanf("%d", &opcao);

    
    switch(opcao) {
        case 1:
            printf("Atributo População\n");
            printf("Carta 1 - %s: %d habitantes \n", pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes \n", pais2, populacao2);
            if (populacao1 > populacao2) {
            printf("Resultado: A Carta 1 venceu!\n");
            } else if (populacao1 == populacao2) {
            printf("Empate\n");
            } else {
            printf("Resultado: A Carta 2 venceu\n!");
            } 
            printf("\n");
                     
        break;

        case 2:
            printf("Atributo Tamanho da área geográfica \n");
            printf("Carta 1 - %s: %.3f km² \n", pais1, area1);
            printf("Carta 2 - %s: %.3f km² \n", pais2, area2);
            if (area1 > area2) {
            printf("Resultado: A Carta 1 venceu!\n");
            } else if (area1 == area2) {
            printf("Empate\n");
            } else {
            printf("Resultado: A Carta 2 venceu!\n");
            }
            printf("\n");
        break;

        case 3:
            //PIB - float
            printf("Atributo PIB \n");
            printf("Carta 1 - %s: R$ %.3f \n", pais1, pib1);
            printf("Carta 2 - %s: R$ %.3f \n", pais2, pib2);
            if (pib1 > pib2) {
            printf("Resultado: A Carta 1 venceu!\n");
            } else if (pib1 == pib2) {
            printf("Empate\n");
            } else {
            printf("Resultado: A Carta 2 venceu!\n");
            }
            printf("\n");
        break;

        case 4:
             //Densidade populacional - float
            printf("Atributo Densidade populacional \n");
            printf("Carta 1 - %s: %.3f hab/km² \n", pais1, densidade1);
            printf("Carta 2 - %s: %.3f hab/km² \n", pais2, densidade2);
            if (densidade1 < densidade2) {
            printf("Resultado: A Carta 1 venceu!\n");
            } else if (densidade1 == densidade2) {
            printf("Empate\n");
            } else {
            printf("Resultado: A Carta 2 venceu!\n");
            }
            printf("\n");
            break;

        case 5:
            //Número de pontos turisticos - int
            printf("Atributo Número de pontos turísticos \n");
            printf("Carta 1 - %s: %d \n", pais1, pontos_turisticos1);
            printf("Carta 2 - %s: %d \n", pais2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Resultado: A Carta 1 venceu!\n");
            } else if (pontos_turisticos1 == pontos_turisticos2) {
            printf("Empate\n");
            } else {
            printf("Resultado: A Carta 2 venceu!");
            }
            printf("\n");
        break;

        default:
            printf("Opção inválida, tente novamente\n"); //Essa linha de código informa ao usuário que ele digitou uma opção inexistente e pede para que tente novamente
        break;
                }
        
        printf("novo commit\n");

        return 0;

        }

    

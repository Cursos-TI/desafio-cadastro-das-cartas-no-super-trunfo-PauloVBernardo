#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 2 - Nível aventureiro - Interatividade no Super Trunfo
// 
//Teste Paulo Vitor dos Santos Bernardo - Nivel mestre


int main() {
     //Declarando as variáveis das cartas 1 e 2

     char pais1[10] = "Brasil", pais2[10] = "Argentina"; //Variável nome dos paísess 
     int populacao1 = 212000000, populacao2 = 45000000;//Variável tamanho das populações em milhões de habitantes
     float area1 = 8510295, area2 = 2780085;//Variável do tamanho das áreas dos países em km²
     float pib1 = 2170000000000, pib2 = 646000000000;//Variável PIB dos países em trilhoes para o primeiro e em bilhões para o segundo
     int pontos_turisticos1 = 40000, pontos_turisticos2 = 35000;//Variável número de pontos turísticos dos países 
     float densidade1, densidade2; //Variável densidade populacional dos países
     int opcao1, opcao2; //Variável para acomodar a escolha do atributo feita pelo usuário
     int comparacao1, comparacao2; //Variáveis para acomodar o resultado das comparações
     char atributo1 [50], atributo2 [50]; //Variáveis gnéricas para acomodar o nome das variáveis e depois exibi-las no resultado 
     float valorAtributo1, valorAtributo2, valorAtributo3, valorAtributo4; //Variáveis genéricas para acomodar os valores dos atributos escolhidos pelo usuário
     float soma1, soma2; //Variáveis para acomodar a soma dos atributos escolhidos
    

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

    printf ("Escolha o número referente ao atributo que deseja comparar\n");
    printf("1. Tamanho populacional dos países\n");
    printf("2. Tamanho da área geográfica dos países\n");
    printf("3. PIB (Produto Interno Bruto) dos países\n");
    printf("4. Densidade populacional dos países\n");
    printf("5. Número de pontos turísticos nos países\n");
    scanf("%d", &opcao1);

    //Primeiro switch para que o usuário faça sua primeira escolha
    switch(opcao1) {
        case 1:
            strcpy (atributo1,"População"); //Uso a função strcpy para copiar o conteúdo da string População para a variável atributo1
            valorAtributo1 = (float)populacao1; //preciso converter todas as variaveis para float
            valorAtributo2 = (float)populacao2;
            comparacao1 = populacao1 > populacao2? 1: (populacao1 == populacao2? 2: 3);
            printf("\n");
                     
        break;

        case 2: //Tamanho da área geográfica
            strcpy(atributo1, "Tamanho da área geográfica (Km²)");
            valorAtributo1 = (float)area1; 
            valorAtributo2 = (float)area2;
            comparacao1 = area1 > area2? 1: (area1 == area2? 2: 3);
            printf("\n");
        break;

        case 3:
            //PIB - float
            strcpy (atributo1, "PIB (R$)");
            valorAtributo1 = pib1; 
            valorAtributo2 = pib2;
            comparacao1 = pib1 > pib2? 1: (pib1 == pib2? 2: 3);
            printf("\n");
        break;

        case 4:
             //Densidade populacional - float
            strcpy (atributo1, "Densidade populacional (hab/km²)");
            valorAtributo1 = densidade1/1; //O valor da densidade divido por 1 resulta no inverso desse valor, 
            valorAtributo2 = densidade2/1;// assim podemos prosseguir com uma comparação igual aos outros atributos e evitar problemas na hora da soma
            comparacao1 = densidade1 > densidade2? 1: (densidade1 == densidade2? 2: 3);
            printf("\n");
            break;

        case 5:
            //Número de pontos turisticos - int
            strcpy (atributo1, "Número de pontos turísticos");
            valorAtributo1 = (float)pontos_turisticos1; 
            valorAtributo2 = (float)pontos_turisticos2;
            comparacao1 = pontos_turisticos1 > pontos_turisticos2? 1: (pontos_turisticos1 == pontos_turisticos2? 2: 3);
            printf("\n");
        break;

        default:
            printf("Opção inválida, tente novamente\n");
        break;
                } 
        
     //Segundo switch para que o usuário faça sua segunda escolha
    printf ("Escolha o número referente ao segundo atributo que deseja comparar\n");
    if (opcao1 != 1)printf("1. Tamanho populacional dos países\n");
    if (opcao1 != 2) printf("2. Tamanho da área geográfica dos países\n");
    if (opcao1 != 3)printf("3. PIB (Produto Interno Bruto) dos países\n");
    if (opcao1 != 4)printf("4. Densidade populacional dos países\n");
    if (opcao1 != 5)printf("5. Número de pontos turísticos nos países\n");
    scanf("%d", &opcao2);
    
    if (opcao1 == opcao2) { 
        printf ("Você escolheu o mesmo atributo! Escolha um diferente");
    } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5);
    switch(opcao2) {
        case 1:
            strcpy (atributo2, "População");
            valorAtributo3 = (float)populacao1; //preciso converter todas as variaveis para float
            valorAtributo4 = (float)populacao2;
            comparacao2 = populacao1 > populacao2? 1: (populacao1 == populacao2? 2: 3);
            printf("\n");
                     
        break;

        case 2:
            strcpy (atributo2, "Tamanho da área geográfica (km²)");
            valorAtributo3 = (float)area1; 
            valorAtributo4 = (float)area2;
            comparacao2 = area1 > area2? 1: (area1 == area2? 2: 3);
            printf("\n");
        break;

        case 3:
            //PIB - float
            strcpy (atributo2, "PIB (R$)");
            valorAtributo3 = pib1; 
            valorAtributo4 = pib2;
            comparacao2 = pib1 > pib2? 1: (pib1 == pib2? 2: 3);
            printf("\n");
        break;

        case 4:
             //Densidade populacional - float
            strcpy (atributo2, "Densidade populacional (hab/km²)");
            valorAtributo3 = densidade1/1; 
            valorAtributo4 = densidade2/1;
            comparacao2 = densidade1 > densidade2? 1: (densidade1 == densidade2? 2: 3);
            printf("\n");
            break;

        case 5:
            //Número de pontos turisticos - int
            strcpy (atributo2, "Número de pontos turísticos");
            valorAtributo3 = (float)pontos_turisticos1; 
            valorAtributo4 = (float)pontos_turisticos2;
            comparacao2 = pontos_turisticos1 > pontos_turisticos2? 1: (pontos_turisticos1 == pontos_turisticos2? 2: 3);
            printf("\n");
        break;

        default:
            printf("Opção inválida, tente novamente\n");
        break;
                }
        
        printf("####>>>>RESULTADOS DA PRIMEIRA RODADA DE COMPARAÇÃO DE ATRIBUTOS<<<<####\n"); 
        printf("\n");       
       //Aqui vou construir um if para exibir a mensagem com os atributos vencedores
       if (comparacao2 == 1) 
       {
           printf("RESULTADO: A CARTA 1 VENCEU A PRIMEIRA RODADA!\n");
           printf("Dados Carta 1:\n");
           printf("País: %s\n", pais1);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo1);
           printf("\n");
           printf("Dados Carta 2:\n");
           printf("País: %s\n", pais2);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo2);
           } else if (comparacao2 == 2) 
           {
           printf("RESULTADO: EMPATE!\n");
           printf("Dados Carta 1:\n");
           printf("País: %s\n", pais1);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo1);
           printf("\n");
           printf("Dados Carta 2:\n");
           printf("País: %s\n", pais2);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo2);
           } else if (comparacao2 == 3) 
           {
           printf("RESULTADO: A CARTA 2 VENCEU A PRIMEIRA RODADA!\n");
           printf("Dados Carta 1:\n");
           printf("País: %s\n", pais1);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo1);
           printf("\n");
           printf("Dados Carta 2:\n");
           printf("País: %s\n", pais2);
           printf("Atributo %s: %.3f\n", atributo1, valorAtributo2);
        } 
        //Estrutura de comparação do segundo atributo escolhido pelo usuário
        printf("\n");
        printf("####>>>>RESULTADOS DA SEGUNDA RODADA DE COMPARAÇÃO DE ATRIBUTOS<<<<####\n");
        printf("\n");

        if (comparacao2 == 1) 
        {
            printf("\nRESULTADO: A CARTA 1 VENCEU A SEGUNDA RODADA!\n");
            printf("Dados Carta 1:\n");
            printf("País: %s\n", pais1);
            printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
            printf("\n");
            printf("Dados Carta 2:\n");
            printf("País: %s\n", pais2);
            printf("Atributo %s: %.3f\n", atributo2, valorAtributo4);
            } else if (comparacao2 == 2) 
            {
            printf("\nResultado: EMPATE!\n");
            printf("Dados Carta 1:\n");
            printf("País: %s\n", pais1);
            printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
            printf("\n");
            printf("Dados Carta 2:\n");
            printf("País: %s\n", pais2);
            printf("Atributo %s: %.3f\n", atributo2, valorAtributo4);
            } else if (comparacao2 == 3) 
            {
            printf("\nRESULTADO: A CARTA 2 VENCEU A SEGUNDA RODADA!\n");
            printf("Dados Carta 1:\n");
            printf("País: %s\n", pais1);
            printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
            printf("\n");
            printf("Dados Carta 2:\n");
            printf("País: %s\n", pais2);
            printf("Atributo %s: %.f\n", atributo2, valorAtributo4);
            }
            
            //Comparação entre a soma dos atributos escolhidos nas duas cartas
            soma1 =  valorAtributo1 + valorAtributo2;
            soma2 = valorAtributo3 + valorAtributo4;
            printf("\n");
            printf("####>>>>RESULTADO DA RODADA FINAL COM A SOMA DOS ATRIBUTOS<<<<####");
            printf("\n");

            if (soma1 > soma2) 
            {
                printf("\nRESULTADO: A CARTA 1 VENCEU A RODADA FINAL!\n");
                printf("Dados Carta 1:\n");
                printf("País: %s\n", pais1);
                printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
                printf("Soma dos atributos: %f\n", soma1);
                printf("\n");
                printf("Dados Carta 2:\n");
                printf("País: %s\n", pais2);
                printf("Atributo %s: %.3f\n", atributo2, valorAtributo4);
                printf("Soma dos atributos: %3.f\n", soma2);
                } else if (soma1 == soma2) 
                {
                printf("\nResultado Final: EMPATE!\n");
                printf("Dados Carta 1:\n");
                printf("País: %s\n", pais1);
                printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
                printf("Soma dos atributos: %3.f\n", soma1);
                printf("\n");
                printf("Dados Carta 2:\n");
                printf("País: %s\n", pais2);
                printf("Atributo %s: %.3f\n", atributo2, valorAtributo4);
                printf("Soma dos atributos: %3.f", soma2);
                } else if (soma1 < soma2) 
                {
                printf("\nRESULTADO: A CARTA 2 VENCEU A RODADA FINAL!\n");
                printf("Dados Carta 1:\n");
                printf("País: %s\n", pais1);
                printf("Atributo %s: %.3f\n", atributo2, valorAtributo3);
                printf("Soma dos atributos: %3.f\n", soma1);
                printf("\n");
                printf("Dados Carta 2:\n");
                printf("País: %s\n", pais2);
                printf("Atributo %s: %.f\n", atributo2, valorAtributo4);
                printf("Soma dos atributos: %3.f\n", soma2);
                }  
                
                //Aqui faz um resumo dos resultados em forma de tabela
                //Na linha de código pede para que se a variável relativa aquela opção tiver sido escolhida
                // na primeria ou segunda rodada que ela seja exibida na tela
                //%-35s% está relacionado à distância da margem e largura das colunas
                printf("\n");
                printf("RESUMO DO RESULTADO\n");
                printf("%-35s%-20s%-20s\n", "Categoria", "Carta 1", "Carta 2");
                printf("%-36s%-20s%-20s\n", "País", pais1, pais2);
                opcao1 == 1 || opcao2 == 1? printf("%-38s%-20d%-20d\n", "POPULAÇÃO (N° DE HABITANTES)", populacao1, populacao2):0;
                opcao1 == 2 || opcao2 == 2? printf("%-35s%-20.2f%-20.2f\n", "ÁREA (Km²)", area1, area2):0;
                opcao1 == 3 || opcao2 == 3?printf("%-35s%-20.2f%-20.2f\n", "PIB (R$)", pib1, pib2):0;
                opcao1 == 4|| opcao2 == 4?printf("%-35s%-20.2f%-20.2f\n", "DENSIDADE (HAB/km²)", densidade1, densidade2):0;
                opcao1 == 5 || opcao2 == 5? printf("%-37s%-20d%-20d\n", "N° DE PONTOS TURÍSTICOS",  pontos_turisticos1, pontos_turisticos2):0;
                printf("%-35s%-20.2f%-20.2f\n", "SOMA DOS ATRIBUTOS", soma1, soma2);
            


        printf("\n");
        printf("novo commit\n");

        return 0;

        }

    

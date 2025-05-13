#include <stdio.h>
#include <string.h>


int main() {
     char estado1[3], codigo1[4], nome1[50], estado2[3], codigo2[4], nome2[50];
     int ponTuristicos1, ponTuristicos2, comparacao1, comparacao2;
     unsigned long int populacao1, populacao2;
     float area1, pib1, area2, pib2, densoPop1, densoPop2, pibCapita1, pibCapita2, somaCarta1 = 0, somaCarta2 = 0;

     printf("Digite as seguintes informações da carta 1: \n\n");

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome1); // Habilita strings compostas

     scanf("%*c"); // Limpa o input buffer antes de ler uma string

     printf("Estado (abreviado): ");
     scanf(" %s", &estado1);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo1);

     printf("População: ");
     scanf("%lu", &populacao1);

     printf("Área em Km²: ");
     scanf("%f", &area1);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib1);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos1);

     //Calculando a densidade populacional e PIB per capita:
     densoPop1 = populacao1 / area1;

     pibCapita1 = (pib1 * 1000000000) / populacao1;
     //Já que o usuário coloca o valor em bilhões, temos que multiplicar o valor da variável.

     printf("\n\nDigite as seguintes informações da carta 2: \n\n");
     scanf("%*c");

     printf("Nome da carta, sem acentos: ");
     scanf("%[^\n]s", nome2);

     scanf("%*c");
       
     printf("Estado (abreviado): ");
     scanf(" %s", estado2);

     printf("Código (letra do estado + número): ");
     scanf("%s", codigo2);

     printf("População: ");
     scanf("%lu", &populacao2);

     printf("Área em Km²: ");
     scanf("%f", &area2);

     printf("PIB em bilhões de reais: ");
     scanf("%f", &pib2);

     printf("Número de pontos turísticos: ");
     scanf("%d", &ponTuristicos2);

     //Calculando a densidade populacional e PIB per capita:
     densoPop2 = populacao2 / area2;

     pibCapita2 = (pib2 * 1000000000) / populacao2;
     
     /*
     //Calculando o Super Poder de ambas as cartas
     superPoder1 = populacao1 + area1 + pib1 + pibCapita1 + ponTuristicos1 - densoPop1;
     superPoder2 = populacao2 + area2 + pib2 + pibCapita2 + ponTuristicos2 - densoPop2;
     /*
     printf("Super poder 1: %.2f\n", superPoder1);
     printf("Super poder 2: %.2f\n", superPoder2);
     */

     printf("\nSelecione o primeiro atributo de comparação entre as cartas: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Número de pontos turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("Escolha: ");
     scanf("%d", &comparacao1);

     printf("\nSelecione o segundo atributo de comparação entre as cartas: \n");
     comparacao1 == 1 ? printf("\n") : printf("1. População\n");
     comparacao1 == 2 ? printf("\n") : printf("2. Área\n");
     comparacao1 == 3 ? printf("\n") : printf("3. PIB\n");
     comparacao1 == 4 ? printf("\n") : printf("4. Número de pontos turísticos\n");
     comparacao1 == 5 ? printf("\n") : printf("5. Densidade Populacional\n");
     printf("Escolha: ");
     scanf("%d", &comparacao2);

     if (comparacao1 == comparacao2) {
          printf("Erro: Você usou a mesma comparação duas vezes.");
     } else {
          printf("\n\nPrimeira rodada!\n");
          switch (comparacao1)
          {
          case 1: // População
               printf("O fator de decisão é : População\n");

               printf("Carta 1 - %s (%s): %u\n", nome1, estado1, populacao1);
               printf("Carta 2 - %s (%s): %u\n\n", nome2, estado2, populacao2);
               if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (populacao1 < populacao2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + populacao1;
               somaCarta2 = somaCarta2 + populacao2;
               break;
          
          case 2: // Área
               printf("O fator de decisão é : Área\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, area2);
               if (area1 > area2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (area1 < area2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + area1;
               somaCarta2 = somaCarta2 + area2;
               break;

          case 3: // PIB
               printf("O fator de decisão é : PIB\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, pib2);
               if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (pib1 < pib2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + pib1;
               somaCarta2 = somaCarta2 + pib2;
               break;

          case 4: // Pontos turísticos
               printf("O fator de decisão é : Número de Pontos Turísticos\n");

               printf("Carta 1 - %s (%s): %u\n", nome1, estado1, ponTuristicos1);
               printf("Carta 2 - %s (%s): %u\n\n", nome2, estado2, ponTuristicos2);
               if (ponTuristicos1 > ponTuristicos2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (ponTuristicos1 < ponTuristicos2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + ponTuristicos1;
               somaCarta2 = somaCarta2 + ponTuristicos2;
               break;

          case 5: // Densidade Populacional
               // Menos é melhor!
               printf("O fator de decisão é : Densidade Populacional\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densoPop1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, densoPop2);
               if (densoPop2 > densoPop1) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (densoPop2 < densoPop1) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + densoPop1;
               somaCarta2 = somaCarta2 + densoPop2;
               break;

          default:
               printf("ERRO: Seleção inválida.");
               break;
          }

          printf("\n\nSegunda rodada!\n");
          switch (comparacao2)
          {
          case 1: // População
               printf("O fator de decisão é : População\n");

               printf("Carta 1 - %s (%s): %u\n", nome1, estado1, populacao1);
               printf("Carta 2 - %s (%s): %u\n\n", nome2, estado2, populacao2);
               if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (populacao1 < populacao2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + populacao1;
               somaCarta2 = somaCarta2 + populacao2;
               break;
          
          case 2: // Área
               printf("O fator de decisão é : Área\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, area2);
               if (area1 > area2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (area1 < area2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + area1;
               somaCarta2 = somaCarta2 + area2;
               break;

          case 3: // PIB
               printf("O fator de decisão é : PIB\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, pib2);
               if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (pib1 < pib2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + pib1;
               somaCarta2 = somaCarta2 + pib2;
               break;

          case 4: // Pontos turísticos
               printf("O fator de decisão é : Número de Pontos Turísticos\n");

               printf("Carta 1 - %s (%s): %u\n", nome1, estado1, ponTuristicos1);
               printf("Carta 2 - %s (%s): %u\n\n", nome2, estado2, ponTuristicos2);
               if (ponTuristicos1 > ponTuristicos2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (ponTuristicos1 < ponTuristicos2) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + ponTuristicos1;
               somaCarta2 = somaCarta2 + ponTuristicos2;
               break;

          case 5: // Densidade Populacional
               // Menos é melhor!
               printf("O fator de decisão é : Densidade Populacional\n");

               printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densoPop1);
               printf("Carta 2 - %s (%s): %.2f\n\n", nome2, estado2, densoPop2);
               if (densoPop2 > densoPop1) {
                    printf("Resultado: Carta 1 (%s) venceu!", nome1);
               } else if (densoPop2 < densoPop1) {
                    printf("Resultado: Carta 2 (%s) venceu!", nome2);
               } else {
                    printf("Resultado: Empate!");
               }
               somaCarta1 = somaCarta1 + densoPop1;
               somaCarta2 = somaCarta2 + densoPop2;
               break;

          default:
               printf("ERRO: Seleção inválida.");
               break;
          }

          printf("\n\nTerceira rodada!");
          printf("\nSoma dos atributos da carta 1: %.2f", somaCarta1);
          printf("\nSoma dos atributos da carta 2: %.2f", somaCarta2);
          if (somaCarta1 > somaCarta2) {
               printf("\n\nResultado: Carta 1 (%s) venceu!", nome1);
          } else if (somaCarta1 < somaCarta2) {
               printf("\n\nResultado: Carta 2 (%s) venceu!", nome2);
          } else {
               printf("\n\nResultado: Empate!");
          }
     }
     return 0;
}
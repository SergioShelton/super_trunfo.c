#include <stdio.h>

    int main(){
        //Variaveis e Variaveis[] array
        char estado[1], estado2[1];
        char codigo, codigo2;
        char cidade[50], cidade2[50];
        int populacao, populacao2;
        float area, area2;
        float pib, pib2;
        int turistico, turistico2;

            //Printf para imprimir o texto e scanf para abrir o pront entrada de dados da primeira carta
            printf("Digite o Estado:\n");
            scanf(" %[^\n]", estado);

            printf("Digite o codigo da carta:\n");
            scanf(" %c", &codigo);

            printf("Digite o nome da cidade:\n");
            scanf(" %[^\n]", cidade);

            printf("Digite o o numero da populacao:\n");
            scanf("%i", &populacao);

            printf("Digite o tamanho da area em km quadrados:\n");
            scanf("%f", &area);

            printf("Digite o PIB da cidade:\n");
            scanf("%f", &pib);

            printf("Digite o numero de ponto turisticos:\n");
            scanf("%s", &turistico);

            

            //Printf para imprimir o texto e scanf para abrir o pront entrada de dados da segunda carta
            printf("Digite o Estado:\n");
            scanf(" %[^\n]", estado2);

            printf("Digite o codigo da carta:\n");
            scanf(" %c", &codigo2);

            printf("Digite o nome da cidade:\n");
            scanf(" %[^\n]", cidade2);;

            printf("Digite o o numero da populacao:\n");
            scanf("%i", &populacao2);

            printf("Digite o tamanho da area em km quadrados:\n");
            scanf("%f", &area2);

            printf("Digite o PIB da cidade:\n");
            scanf("%f", &pib2);

            printf("Digite o numero de ponto turisticos:\n");
            scanf("%s", &turistico2);


            //Printf para imprimir as informaçoes da primeira carta
            printf("Carta 1:\n");
            printf("Estado: %s\n", &estado);
            printf("Código: %s0%c\n",estado, codigo);
            printf("Nome da Cidade: %s\n", cidade);
            printf("Populacao: %i\n", populacao);
            printf("Area: %.2f km²\n", area);
            printf("PIB: %.2f bilhões de reais\n", pib);
            printf("Numero de pontos Turisticos: %s\n", &turistico);

            //Printf para imprimir as informaçoes da segunda carta
            printf("Carta 2:\n");
            printf("Estado: %s\n", &estado2);
            printf("Código: %s0%c\n",estado2, codigo2);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("Populacao: %i\n", populacao2);
            printf("Area: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Numero de pontos Turisticos: %s\n", &turistico2);



}

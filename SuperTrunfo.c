#include <stdio.h>
#include <string.h>

int main() {
    char estado[50], estado2[50];
    char codigo, codigo2;
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turistico, turistico2;

    float mediapopcid, mediapibpop, mediapopcid2, mediapibpop2;

    int densidade, percapita, turimaior;
    int resultado, resultado2;

    int superpoder, superpoder2;

    // Entrada da primeira cidade
    printf("**Digite os dados da primeira carta**\n");
    printf("Digite o Estado:\n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';  // Removendo o '\n' do fgets

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade);  // Lendo nome completo da cidade

    printf("Digite o número da população:\n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área em km quadrados:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico);

    mediapopcid = populacao / area;
    mediapibpop = pib / populacao;

    // Entrada da segunda cidade
    printf("**Digite os dados da segunda carta**\n");
    printf("Digite o Estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o código da carta:\n");
    scanf(" %c", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número da população:\n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em km quadrados:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico2);

    mediapopcid2 = populacao2 / area2;
    mediapibpop2 = pib2 / populacao2;

    // Comparação de atributos
    densidade  = (mediapopcid < mediapopcid2); // Cidade 1 perde se tiver maior densidade
    percapita  = (mediapibpop > mediapibpop2); // Cidade 1 vence se PIB per capita for maior
    turimaior  = (turistico > turistico2);     // Cidade 1 vence se tiver mais pontos turísticos

    resultado  = densidade + percapita + turimaior;
    resultado2 = 3 - resultado; // O resultado da segunda cidade será o contrário

    // logica do vencedor
    superpoder  = (resultado > resultado2); 
    superpoder2 = (resultado2 > resultado); 

    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turistico);
    printf("Densidade populacional: %.2f hab/km²\n", mediapopcid);
    printf("PIB Per Capita: %.2f reais\n", mediapibpop);
    printf("Super poder (1 = venceu, 0 = perdeu): %d\n", superpoder);

    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", mediapopcid2);
    printf("PIB Per Capita: %.2f reais\n", mediapibpop2);
    printf("Super poder (1 = venceu, 0 = perdeu): %d\n", superpoder2);

    return 0;
}

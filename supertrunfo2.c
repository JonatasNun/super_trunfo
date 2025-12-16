#include <stdio.h>

int main() {
    char estado;
    char letra_num[10];
    char nomedacidade[30];
    unsigned long int populacao;
    float area;
    float PIB;
    int pontostur;
    float superpoder;

    // ===== ENTRADA DA PRIMEIRA CARTA =====

    printf("Digite a letra que representará seu estado 1:\n");
    scanf(" %c", &estado);

    printf("Digite a letra e número:\n");
    scanf("%s", letra_num);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao);

    printf("Digite a área em km2:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontostur);

    float densidade1 = (float)populacao / area;
    float invDensidade1 = 1.0f / densidade1;

    float PIBCap = PIB / populacao;

    superpoder = (float)populacao + area + PIB + pontostur + PIBCap + invDensidade1;

    // ===== ENTRADA DA SEGUNDA CARTA =====

    char estado2;
    char letra_num2[10];
    char nomedacidade2[30];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontostur2;
    float superpoder2;

    printf("Digite a letra que representará seu estado 2:\n");
    scanf(" %c", &estado2);

    printf("Digite a letra e número:\n");
    scanf("%s", letra_num2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontostur2);

    float densidade2 = (float)populacao2 / area2;
    float invDensidade2 = 1.0f / densidade2;

    float PIBcap2 = PIB2 / populacao2;

    superpoder2 = (float)populacao2 + area2 + PIB2 + pontostur2 + PIBcap2 + invDensidade2;

    // ===== MOSTRAR RESULTADOS =====

    printf("================= CARTA 1 ===================\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", letra_num);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", pontostur);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", PIBCap);
    printf("Super poder: %.2f\n", superpoder);

    printf("================= CARTA 2 ===================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", letra_num2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontostur2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", PIBcap2);
    printf("Super poder: %.2f\n", superpoder2);

    // ===== COMPARAÇÃO =====

    printf("================= COMPARAÇÃO =================\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos turísticos: %d\n", pontostur > pontostur2);
    printf("Densidade Populacional: %d\n", invDensidade1 > invDensidade2);
    printf("PIB per capita: %d\n", PIBCap > PIBcap2);
    printf("Super Poder: %d\n", superpoder > superpoder2);

    return 0;
}

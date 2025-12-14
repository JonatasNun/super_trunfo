#include <stdio.h>
int main(){
    char estado;
    char letra_num[10];
    char nomedacidade[30];
    int populacao;
    float area;
    float PIB;
    int pontostur;

    //Entrada da primeira carta//

    printf("Digite a letra que representará seu estado 1: \n");
    scanf(" %c", &estado);

    printf("Digite a letra e número: \n");
    scanf(" %s", letra_num);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomedacidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km2: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontostur);

    float densidadepop1 = (float)populacao / area;

    float PIBCap = PIB / populacao;
    

///Entrada da segunda carta///

    char estado2;
    char letra_num2[10];
    char nomedacidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int pontostur2;

    printf("Digite a letra que representará seu estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra e número: \n");
    scanf(" %s", letra_num2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomedacidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontostur2);

    float densidadepop2 = (float)populacao / area;

    float PIBcap2 = PIB2 / populacao2;

//Mostrar resultado//
printf("================= CARTA1 ===================\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", letra_num);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Números de pontos turísticos: %d\n", pontostur);
    printf("A densidade populacional: %.2f\n", densidadepop1);
    printf("O PIB per capita: %.2f\n", PIBCap);

printf("================ CARTA 2 ======================\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", letra_num2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Números de pontos turísticos: %d\n", pontostur2);
    printf("A densidade populacional: %.2f\n", densidadepop2);
    printf("O PIB per capita: %.2f\n", PIBcap2);
    return 0;

}

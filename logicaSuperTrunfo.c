#include <stdio.h>

int main() {
    // VARIAVEIS CIDADES
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidadepopulacao1, densidadepopulacao2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // SCANF CIDADE 1
    printf("Cadastre o Estado da primeira cidade: (entre A e H)\n");
    scanf("%s", estado1);

    printf("Cadastre o Codigo da primeira cidade: (ex: A01, A02.)\n");
    scanf("%s", codigo1);

    printf("Informe o nome da primeira cidade:\n");
    scanf("%s", cidade1);

    printf("Informe a população da primeira cidade:\n");
    scanf("%d", &populacao1);

    printf("Informe a área em km2 da primeira cidade:\n");
    scanf("%f", &area1);

    printf("Informe o PIB da primeira cidade:\n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &pontosturisticos1);

    // SCANF CIADE 2
    printf("\nCadastre o Estado da segunda cidade: (entre A e H)\n");
    scanf("%s", estado2);

    printf("Cadastre o Codigo da segunda cidade: (ex: A01, A02.)\n");
    scanf("%s", codigo2);

    printf("Informe o nome da segunda cidade:\n");
    scanf("%s", cidade2);

    printf("Informe a população da segunda cidade:\n");
    scanf("%d", &populacao2);

    printf("Informe a área (em km2 da segunda cidade:\n");
    scanf("%f", &area2);

    printf("Informe o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontosturisticos2);

    // CALCULO DENSIDADE E PIB 1
    densidadepopulacao1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // CALCULO DENSIDADE E PIB 2
    densidadepopulacao2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // CALCULO DO SUPER PODER
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacao1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacao2);

    // EXIBIÇÃO DOS DADOS DA CIDADE 1
    printf("\nCidade 1 Cadastrada com sucesso\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Área em Km2: %.2f\n", area1);
    printf("PIB: RS%.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("PIB Per Capita: RS%.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nXXXXXXXXXX\n");

    // EXIBIÇÃO DOS DADOS DA CIDADE 2
    printf("\nCidade 2 Cadastrada com sucesso\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área em Km2: %.2f\n", area2);
    printf("PIB: RS%.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("PIB Per Capita: RS%.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // MENU PARA ESCOLHER O PRIMEIRO Atributo
    int escolhausuario1, escolhausuario2;

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área Total\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    scanf("%d", &escolhausuario1);

    printf("\nEscolha o segundo atributo para a comparação (não pode ser o mesmo):\n");

    if (escolhausuario1 == 1) {
        printf("2. Área Total\n3. PIB\n4. Densidade Demográfica\n");
    } else if (escolhausuario1 == 2) {
        printf("1. População\n3. PIB\n4. Densidade Demográfica\n");
    } else if (escolhausuario1 == 3) {
        printf("1. População\n2. Área Total\n4. Densidade Demográfica\n");
    } else if (escolhausuario1 == 4) {
        printf("1. População\n2. Área Total\n3. PIB\n");
    }

    scanf("%d", &escolhausuario2);

    //Comparação dos atributos
    float valor1 = 0, valor2 = 0;
    printf("\nComparação de Cartas:\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n", cidade2);

    // Comparar o primeiro atributo
    if (escolhausuario1 == 1) {
        valor1 = populacao1;
        valor2 = populacao2;
        printf("\nAtributo 1: População\n");
    } else if (escolhausuario1 == 2) {
        valor1 = area1;
        valor2 = area2;
        printf("\nAtributo 1: Área Total\n");
    } else if (escolhausuario1 == 3) {
        valor1 = pib1;
        valor2 = pib2;
        printf("\nAtributo 1: PIB\n");
    } else if (escolhausuario1 == 4) {
        valor1 = densidadepopulacao1;
        valor2 = densidadepopulacao2;
        printf("\nAtributo 1: Densidade Demográfica\n");
    }

    // Compara o segundo atributo
    if (escolhausuario2 == 1) {
        valor1 += populacao1;
        valor2 += populacao2;
        printf("Atributo 2: População\n");
    } else if (escolhausuario2 == 2) {
        valor1 += area1;
        valor2 += area2;
        printf("Atributo 2: Área Total\n");
    } else if (escolhausuario2 == 3) {
        valor1 += pib1;
        valor2 += pib2;
        printf("Atributo 2: PIB\n");
    } else if (escolhausuario2 == 4) {
        valor1 += densidadepopulacao1;
        valor2 += densidadepopulacao2;
        printf("Atributo 2: Densidade Demográfica\n");
    }

    //resultados
    printf("\nValores dos Atributos:\n");
    printf("Cidade 1: %.2f\n", valor1);
    printf("Cidade 2: %.2f\n", valor2);

    if (valor1 > valor2) {
        printf("\nResultado: Cidade %s Venceu!\n", cidade1);
    } else if (valor2 > valor1) {
        printf("\nResultado: Cidade %s Venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}

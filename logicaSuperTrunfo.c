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

    printf("-------------xx------------");

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

    //EXIBIÇAO DOS DADOS CIDADE1
    printf("\nCidade 1 Cadastrada com sucesso\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1); // Mudei para lu - unsigned long int
    printf("Área em Km2: %f\n", area1);
    printf("PIB: RS%.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("PIB Per Capita: RS%.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nXXXXXXXXXX\n");

    //EXIBICAO DOS DADOS CIDADE2
    printf("\nCidade 2 Cadastrada com sucesso\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2); // Mudei para lu - unsigned long int
    printf("Área em Km2: %f\n", area2);
    printf("PIB: RS%.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("PIB Per Capita: RS%.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //COMPARAÇAO COM SWITCH

    int escolhausuario;
    printf("\nEscolha um dos atributos para a batalha!\n");
    printf("1. População\n");
    printf("2. Área Total\n");
    printf("3. PIB\n");
    printf("4. Densidade Demografica\n");
    scanf("%d", &escolhausuario);

    switch (escolhausuario){
        case 1:
            printf("\nComparação de Cartas (Atributo: População)\n");
            printf("Carta 1: %s, População: %d\n", cidade1, populacao1);
            printf("Carta 2: %s, População: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Cidade %s Venceu! População: %d\n", cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Cidade %s Venceu! População: %d\n", cidade2, populacao2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
            }
            break;
        
        case 2:
            printf("\nComparação de Cartas (Atributo: Área Total)\n");
            printf("Carta 1: %s, Área: %.2f km²\n", cidade1, area1);
            printf("Carta 2: %s, Área: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Cidade %s Venceu! Área: %.2f km²\n", cidade1, area1);
            } else if (area2 > area1) {
                printf("Resultado: Cidade %s Venceu! Área: %.2f km²\n", cidade2, area2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma área.\n");
            }
            break;
        
        case 3:
            printf("\nComparação de Cartas (Atributo: PIB)\n");
            printf("Carta 1: %s, PIB: RS%.2f\n", cidade1, pib1);
            printf("Carta 2: %s, PIB: RS%.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Cidade %s Venceu! PIB: RS%.2f\n", cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("Resultado: Cidade %s Venceu! PIB: RS%.2f\n", cidade2, pib2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm o mesmo PIB.\n");
            }
            break;
        
        case 4:
            printf("\nComparação de Cartas (Atributo: Densidade Demográfica)\n");
            printf("Carta 1: %s, Densidade: %.2f hab/km²\n", cidade1, densidadepopulacao1);
            printf("Carta 2: %s, Densidade: %.2f hab/km²\n", cidade2, densidadepopulacao2);
            if (densidadepopulacao1 < densidadepopulacao2) {
                printf("Resultado: Cidade %s Venceu! Densidade Demográfica: %.2f hab/km²\n", cidade1, densidadepopulacao1);
            } else if (densidadepopulacao2 < densidadepopulacao1) {
                printf("Resultado: Cidade %s Venceu! Densidade Demográfica: %.2f hab/km²\n", cidade2, densidadepopulacao2);
            } else {
                printf("Resultado: Empate! Ambas as cidades têm a mesma densidade populacional.\n");
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
}
    
        return 0;
}
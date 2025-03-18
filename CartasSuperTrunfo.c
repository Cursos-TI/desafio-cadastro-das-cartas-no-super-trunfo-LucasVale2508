#include <stdio.h>
#include <string.h>


int main() {
   
    char estado1;
    char codigo1[4]; 
    char nome1[50];  
    int populacao1;
    float area1;
    float pib1;
    int turismo1;

    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    float superPoder1, superPoder2;

    int opcao;

    
    // Cadastro das Cartas:

    printf("Bem-vindo ao Super Trunfo de Cidades!\n\n");

    
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); 

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo1);

    
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo2);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    superPoder1 = (populacao1 + area1 + pib1 + turismo1 + pibpercapita1) - densidade1;
    superPoder2 = (populacao2 + area2 + pib2 + turismo2 + pibpercapita2) - densidade2;

    // Exibição dos Dados das Cartas:

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade: %.2f\n", densidade1);
    printf("Pib per capita: %.2f\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade: %.2f\n", densidade2);
    printf("Pib per capita: %.2f\n\n", pibpercapita2);

    // Comparação de cartas
do {
    printf("\n*** Comparação das cartas ***\n");
    printf("Escolha um dos atributos para comparar as duas cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        printf("\n*** Atributo população ***\n");
        printf("Carta 1 - %s: %d \n", nome1, populacao1);
        printf("Carta 2 - %s: %d \n", nome2, populacao2);
        if(populacao1 > populacao2){
            printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (populacao2 > populacao1){
            printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 2:
        printf("\n*** Atributo Área ***\n");
        printf("Carta 1 - %s: %.2f \n", nome1, area1);
        printf("Carta 2 - %s: %.2f \n", nome2, area2);
        if(area1 > area2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if(area2 > area1){
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 3:
        printf("\n*** Atributo PIB ***\n");
        printf("Carta 1 - %s: %.2f \n", nome1, pib1);
        printf("Carta 2 - %s: %.2f \n", nome2, pib2);
        if(pib1 > pib2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 4:
        printf("\n*** Atributo pontos turísticos ***\n");
        printf("Carta 1 - %s: %d \n", nome1, turismo1);
        printf("Carta 2 - %s: %d \n", nome2, turismo2);
        if(turismo1 > turismo2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (turismo2 > turismo1) {
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 5:
        printf("\n*** Atributo densidade ***\n");
        printf("Carta 1 - %s: %.2f \n", nome1, densidade1);
        printf("Carta 2 - %s: %.2f \n", nome2, densidade2);
        if(densidade1 < densidade2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (densidade2 < densidade1) {
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 6:
        printf("\n*** Atributo PIB per capita ***\n");
        printf("Carta 1 - %s: %.2f \n", nome1, pibpercapita1);
        printf("Carta 2 - %s: %.2f \n", nome2, pibpercapita2);
        if(pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (pibpercapita2 > pibpercapita1){
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 7:
        printf("\n*** Atributo Super Poder ***\n");
        printf("Carta 1 - %s: %.2f \n", nome1, superPoder1);
        printf("Carta 2 - %s: %.2f \n", nome2, superPoder2);
        if(superPoder1 > superPoder2){
        printf("Resultado: Carta 1 - (%s) venceu!\n", nome1);
        } else if (superPoder2 > superPoder1) {
        printf("Resultado: Carta 2 - (%s) venceu!\n", nome2); 
        } else {
        printf("Resultado: Empate!\n");
        }
        break;

        case 0:
        printf("Saindo...\n");
        break;

        default:
        printf("Opção inválida! Selecione uma opção da lista.\n");
        break;

    } 
} while (opcao != 0);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
   
    char estado1[] = "Rio de Janeiro";
    char codigo1[4] = "A02";
    int populacao1 = 6700000;
    float area1 = 1200;
    float pib1 = 420000000;
    int turismo1 = 200;

    char estado2[] = "São Paulo";
    char codigo2[4] = "B02";
    int populacao2 = 12300000;
    float area2 = 1521;
    float pib2 = 780000000;
    int turismo2 = 150;

    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    float superPoder1, superPoder2;

    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    // Cálculo da densidade, pibpercapita e superpoder de cada carta

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    superPoder1 = (populacao1 + area1 + pib1 + turismo1 + pibpercapita1) - densidade1;
    superPoder2 = (populacao2 + area2 + pib2 + turismo2 + pibpercapita2) - densidade2;

    // Escolha e comparação dos atributos:

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1.População: %d\n", populacao1);
    printf("2.Área: %.2f km²\n", area1);
    printf("3.PIB: %.2f bilhões de reais\n", pib1);
    printf("4.Número de Pontos Turísticos: %d\n", turismo1);
    printf("5.Densidade: %.2f\n", densidade1);
    printf("6.Pib per capita: %.2f\n", pibpercapita1);
    printf("7.SuperPoder: %.2f\n", superPoder1);

    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu a opção população!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu a opção área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu a opção pontos turísticos!\n");
        resultado1 = turismo1 > turismo2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu a opção densidade!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

    case 6:
        printf("Você escolheu a opção pib per capita!\n");
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;

    case 7:
        printf("Você escolheu a opção super poder!\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo para comparação:\n");
    printf("Atenção! Você deve escolher um atributo diferente do primeiro!\n");
    printf("1.População: %d\n", populacao1);
    printf("2.Área: %.2f km²\n", area1);
    printf("3.PIB: %.2f bilhões de reais\n", pib1);
    printf("4.Número de Pontos Turísticos: %d\n", turismo1);
    printf("5.Densidade: %.2f\n", densidade1);
    printf("6.Pib per capita: %.2f\n", pibpercapita1);
    printf("7.SuperPoder: %.2f\n", superPoder1);

    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!");
    }
    else
    {
        switch (segundoAtributo)
        {
        case 1:
            printf("Você escolheu a opção população!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
            printf("Você escolheu a opção área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("Você escolheu a opção PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;

        case 4:
            printf("Você escolheu a opção pontos turísticos!\n");
            resultado2 = turismo1 > turismo2 ? 1 : 0;
            break;

        case 5:
            printf("Você escolheu a opção densidade!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;

        case 6:
            printf("Você escolheu a opção pib per capita!\n");
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;

        case 7:
            printf("Você escolheu a opção super poder!\n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    }
    // Cáculo do resultado
    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
    }
    else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    }
    else
    {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}

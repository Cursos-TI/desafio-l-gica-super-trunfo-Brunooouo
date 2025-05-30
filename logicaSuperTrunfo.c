#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    unsigned long int populacao = 10286780;
    float area = 1173.84;
    float pib = 256923874297.89;
    int turisticos = 74;
    float densidade;
    densidade = (populacao / area);

    unsigned long int populacao1 = 9539029;
    float area1 = 1945.90;
    float pib1 = 356342763154.64;
    int turisticos1 = 89;
    float densidade1;
    densidade1 = (populacao1 / area1);

    //Início do jogo
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("T. Turísticos\n");
    printf("D. Densidade Populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n");
        resultado1 = populacao > populacao1 ? 1 : 0;
        break;

    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        resultado1 = area > area1 ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib > pib1 ? 1 : 0;
        break;

    case 'T':
    case 't':
        printf("Você escolheu a opção Turísticos!\n");
        resultado1 = turisticos > turisticos1 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado1 = densidade > densidade1 ? 1 : 0;
        break;

    default:
        printf("Opção de jogo Inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("T. Turísticos\n");
    printf("D. Densidade Populacional\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
        return 1;
    } else {
        switch (segundoAtributo)
        {
        case 'P':
        case 'p':
            printf("Você escolheu a opção População!\n");
            resultado1 = populacao > populacao1 ? 1 : 0;
            break;

        case 'A':
        case 'a':
            printf("Você escolheu a opção Área!\n");
            resultado1 = area > area1 ? 1 : 0;
            break;

        case 'I':
        case 'i':
            printf("Você escolheu a opção PIB!\n");
            resultado1 = pib > pib1 ? 1 : 0;
            break;

        case 'T':
        case 't':
            printf("Você escolheu a opção Turísticos!\n");
            resultado1 = turisticos > turisticos1 ? 1 : 0;
            break;

        case 'D':
        case 'd':
            printf("Você escolheu a opção Densidade Populacional!\n");
            resultado1 = densidade > densidade1 ? 1 : 0;
            break;

        default:
            printf("Opção de jogo inválida\n");
            break;
        }
    }
    
    if (resultado1 && resultado2){
        printf("Parabéns, você venceu usando a Carta Fortaleza!\n");
    } else if (resultado1 < resultado2){
        printf("Infelizmente, você perdeu para a Carta Pernambuco!\n");
    } else {
        printf("Empatou!\n");
    }
    
}
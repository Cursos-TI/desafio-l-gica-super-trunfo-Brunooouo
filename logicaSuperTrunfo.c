#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhadousuario;

    char Carta1[] = "Fortaleza";
    unsigned long int populacao = 10286780;
    float area = 1173.84;
    float pib = 256923874297.89;
    int turisticos = 74;
    float densidade;
    densidade = (populacao / area);

    char Carta2[] = "Pernambuco";
    unsigned long int populacao1 = 9539029;
    float area1 = 1945.90;
    float pib1 = 356342763154.64;
    int turisticos1 = 89;
    float densidade1;
    densidade1 = (populacao1 / area1);

    printf("--- Comparação das Cartas ---\n");
    printf("1. Iniciar a Comparação\n");
    printf("2. Método de Comparação\n");
    printf("3. Mostrar as Cartas\n");
    printf("4. Sair\n");
    printf("Escolha um opção:\n");
    scanf("%d", &escolhadousuario);

    switch (escolhadousuario) {
    case 1:
        printf("Selecione qual atributo você quer comparar?\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Turístico\n");
        printf("5. Densidade Populacional\n");
        printf("Escolha uma das opções:\n");
        scanf("%d", &escolhadousuario);
        break;
    case 2:
        printf("Pegamos os atributos das cartas e fazemos a comparação e o atributo que for maior vence. Exceto a Densidade Populacional que o menor vence.\n");
        return 1;
    case 3:
        printf("1. Fortaleza e 2. Pernambuco\n");
        return 1;
    case 4:
        printf("Saindo...\n");
        return 1;
    default: printf("Opção inválida, tente novamente");
        break;
    }

    switch (escolhadousuario)
    {
    case 1:
        printf("Atributo: População\n");
        if (populacao > populacao1)
    {
        printf("A Carta 1 (Fortaleza) com %lu de população venceu!\n", populacao);
    } else if (populacao < populacao1)
    {
        printf("A Carta 2 (Pernambuco) com %lu de população venceu!\n", populacao1);
    } else {
        printf("Empatou\n");
    }
        return 1;
    case 2:
        printf("Atributo: Área\n");
        if (area > area1)
    {
        printf("A Carta 1 (Fortaleza) com %.2f Km² de área venceu!\n", area);
    } else if (area < area1)
    {
        printf("A Carta 2 (Pernambuco) com %.2f Km² de área venceu!\n", area1);
    } else {
        printf("Empatou\n");
    }
        return 1;
    case 3:
        printf("Atributo: PIB\n");
        if (pib > pib1)
    {
        printf("A Carta 1 (Fortaleza) com %.2f bilhões de reais de PIB venceu!\n", pib);
    } else if (pib < pib1)
    {
        printf("A Carta 2 (Pernambuco) com %.2f bilhões de reais de PIB venceu!\n", pib1);
    } else {
        printf("Empatou\n");
    }
        return 1;
    case 4:
        printf("Atributo: Turístico\n");
        if (turisticos > turisticos1)
    {
        printf("A Carta 1 (Fortaleza) com %d Pontos Turísticos venceu!\n", turisticos);
    } else if (turisticos < turisticos1)
    {
        printf("A Carta 2 (Pernambuco) com %d Pontos Turísticos venceu!\n", turisticos1);
    } else {
        printf("Empatou\n");
    }
        return 1;
    case 5:
        printf("Atributo: Densidade Populacional\n");
        if (densidade < densidade1)
    {
        printf("A Carta 1 (Fortaleza) com %.2f hab/Km² de Densidade Populacional venceu!\n",densidade);
    } else if (densidade > densidade1)
    {
        printf("A Carta 2 (Pernambuco) com %.2f hab/Km² de Densidade Populacional venceu!\n",densidade1);
    } else {
        printf("Empatou\n");
    }
        return 1;
    default: 
        printf("=== ERRO - Tente Novamente ===");
        break;
    }

    
    return 0;
}
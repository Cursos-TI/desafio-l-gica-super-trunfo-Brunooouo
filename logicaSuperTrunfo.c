#include <stdio.h>

int main(){

    float area = 1173.84;
    float area1 = 1945.90;
    
    char Carta1[] = "Carta 1";
    char Carta2[] = "Carta 2";

    printf("Comparação de Cartas (Atributo: Área): \n");
    printf("\n");
    printf("Carta 1 - Fortaleza (FOR): 1173.84 \n");
    printf("Carta 2 - Pernambuco (PE): 1945.90 \n");

    if(area > area1){
        printf("Resultado: %s (Fortaleza) venceu! \n", Carta1);
    } else {
        printf("Resultado: %s (Pernambuco) venceu! \n", Carta2);
    }

    return 0;
}
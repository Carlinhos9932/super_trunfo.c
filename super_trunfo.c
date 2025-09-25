#include <stdio.h>
int main(){

    int Pontos_turisticos1, Pontos_turisticos2, População1, População2;
    float Area1, Area2, PIB1, PIB2;  //Área da cidade é em km²
    char Estado1, Estado2, Codigo1 [20], Codigo2 [20], Cidade1 [30], Cidade2 [30];
     
    printf("Olá, seja bem vindo ao super trunfo dos paises, preencha as cartas com as informações\n");
    printf("Começando pela Carta 1:\n");
    
    printf("Estado:\n");
    scanf("%c", &Estado1);

    printf("Codigo:\n");
    scanf("%s", &Codigo1);

    printf("Cidade:\n");
    scanf(" %[^\n]", &Cidade1);

    printf("População:\n");
    scanf("%d", &População1);

    printf("Area:\n");
    scanf("%f", &Area1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Pontos turisticos:\n");
    scanf("%d", &Pontos_turisticos1);

    printf("Agora a Carta 2:\n");

    printf("Estado:\n");
    scanf(" %c", &Estado2);

    printf("Codigo:\n");
    scanf("%s", &Codigo2);

    printf("Cidade:\n");
    scanf(" %[^\n]", &Cidade2);

    printf("População:\n");
    scanf("%d", &População2);

    printf("Area:\n");
    scanf("%f", &Area2);

    printf("PIB:\n");
    scanf("%f", &PIB2);

    printf("Pontos turisticos:\n");
    scanf("%d", &Pontos_turisticos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Area: %f\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Area: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos2);



    return 0;
}

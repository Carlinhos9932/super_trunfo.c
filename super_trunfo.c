#include <stdio.h>
int main(){

    int Pontos_turisticos1, Pontos_turisticos2, População1, População2;
    float Area1, Area2, PIB1, PIB2;  //Área da cidade é em km²
    char Estado1, Estado2, Codigo1 [20], Codigo2 [20], Cidade1 [30], Cidade2 [30];
    float Densidade_Populacional1, Densidade_Populacional2, Pib_per_capita1, Pib_per_capita2;
    
    /*O valor de PIB é para ser considerado em bilhões para proposito de cálculo, eu fiz isso
    pois parecia coincidir mais com os numeros apresentados nos exemplos*/

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

    Densidade_Populacional1 = (float) População1 / Area1;

    /* aqui o PIB vai ir automaticamente para a casa dos bilhões, assim não é necessario que a pessoa
    digitando precise colocar o numero de bilhão inteiro para a conta estár correta.*/
    Pib_per_capita1 = (float) (PIB1 * 1000000000)/ População1;

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

    Densidade_Populacional2 = (float) População2 / Area2;

    Pib_per_capita2 = (float) (PIB2 *1000000000) / População2;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", Pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", Pib_per_capita2);



    return 0;
}

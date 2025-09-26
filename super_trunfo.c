#include <stdio.h>
int main(){

    int Pontos_turisticos1, Pontos_turisticos2;
    unsigned long int  População1, População2;
    float Area1, Area2, PIB1, PIB2;  //Área da cidade é em km²
    char Estado1, Estado2, Codigo1 [20], Codigo2 [20], Cidade1 [30], Cidade2 [30];
    float Densidade_Populacional1, Densidade_Populacional2, Pib_per_capita1, Pib_per_capita2;
    float super_poder1, super_poder2;
    
    /*O valor de PIB é para ser considerado em bilhões para proposito de cálculo, eu fiz isso
    pois parecia coincidir mais com os numeros apresentados nos exemplos*/

    printf("Olá, seja bem vindo ao super trunfo dos paises, preencha as cartas com as informações\n");
    printf("Começando pela Carta 1:\n");
    
    printf("Estado:\n");
    scanf("%c", &Estado1);

    printf("Codigo:\n");
    scanf("%s", &Codigo1);

    printf("Cidade:\n"); //Coloquei "%[^\n] para que pudesse escrever com espaço o Nome das Cidades.
    scanf(" %[^\n]", &Cidade1);

    printf("População:\n");
    scanf("%lu", &População1);

    printf("Area:\n");
    scanf("%f", &Area1);

    printf("PIB:\n"); 
    scanf("%f", &PIB1); 

    printf("Pontos turisticos:\n");
    scanf("%d", &Pontos_turisticos1);

    Densidade_Populacional1 = (float) População1 / Area1;

    /* aqui o PIB vai ir automaticamente para a casa dos bilhões, assim não é necessario que a pessoa
    digitando precise colocar o numero de bilhão inteiro para a conta estár correta.*/
    Pib_per_capita1 = (float) (PIB1 * 1000000000)/ (float) População1;

    super_poder1 = (float) População1 + Area1 + PIB1 + (float) Pontos_turisticos1 + Pib_per_capita1 + ( 1 / Densidade_Populacional1);

    printf("Agora a Carta 2:\n");

    printf("Estado:\n");
    scanf(" %c", &Estado2);

    printf("Codigo:\n");
    scanf("%s", &Codigo2);

    printf("Cidade:\n");
    scanf(" %[^\n]", &Cidade2);

    printf("População:\n");
    scanf("%lu", &População2);

    printf("Area:\n");
    scanf("%f", &Area2);

    printf("PIB:\n"); 
    scanf("%f", &PIB2);

    printf("Pontos turisticos:\n");
    scanf("%d", &Pontos_turisticos2);

    Densidade_Populacional2 = (float) População2 / Area2;

    Pib_per_capita2 = (float) (PIB2 *1000000000) / (float) População2;

    super_poder2 = (float) População2 + Area2 + PIB2 + (float) Pontos_turisticos2 + Pib_per_capita2 + ( 1 / Densidade_Populacional2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", População1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", Pib_per_capita1);
    printf("Super Poder: %.2f \n \n", super_poder1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", População2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais\n", Pib_per_capita2);
    printf("Super Poder: %.2f \n \n", super_poder2);

    //Nessa comparação entre as duas cartas, os resultados seram: 1 = carta 1 venceu, 0 = carta 2 venceu.
    
    printf("Comparação de Cartas: \n");
    printf("População: carta 1 > carta 2: %d \n", População1 >  População2);
    printf("Area: carta 1 > carta 2: %d \n", Area1 > Area2);
    printf("PIB: carta 1 > carta 2: %d \n", PIB1 > PIB2);
    printf("Pontos turisticos: carta 1 > carta 2: %d \n", Pontos_turisticos1 > Pontos_turisticos2);
    printf("Densidade populacional: carta 1 < carta 2: %d \n", Densidade_Populacional1 < Densidade_Populacional2); //nessa se o resultado for 1 significa que a carta 2 venceu
    printf("PIB per capita: carta 1 > carta 2: %d \n", Pib_per_capita1 > Pib_per_capita2);
    printf("Super Poder carta 1 > carta 2: %d \n", super_poder1 > super_poder2);



    return 0;
}

#include <stdio.h>
int main(){

    int Pontos_turisticos1, Pontos_turisticos2, opcao, opcao2;
    unsigned long int  População1, População2;
    float Area1, Area2, PIB1, PIB2;  //Área da cidade é em km²
    char Estado1, Estado2, Codigo1 [20], Codigo2 [20], Cidade1 [30], Cidade2 [30];
    float Densidade_Populacional1, Densidade_Populacional2, Pib_per_capita1, Pib_per_capita2;
    float super_poder1, super_poder2;
    float somacarta1, somacarta2;
    float atributo1, atributo2, atributo3, atributo4;
    
    /*O valor de PIB é para ser considerado em bilhões para proposito de cálculo, eu fiz isso
    pois parecia coincidir mais com os numeros apresentados nos exemplos*/

    printf("Olá, seja bem vindo ao super trunfo dos paises, preencha as cartas com as informações\n");
    printf("Começando pela Carta 1:\n");
    
    printf("Estado:\n");
    scanf("%c", &Estado1);

    printf("Codigo:\n");
    scanf("%s", &Codigo1);

    printf("Cidade:\n"); //
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

    printf("Agora, Escolha um Atributo para comparar entre:\n");
    printf("1. Nome da cidade(não é comparavel)\n");
    printf("2. População\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Numero de Pontos Turisticos\n");
    printf("6. Densidade Populacional\n");
    scanf("%d", &opcao);

    if (opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 || opcao == 6)
    {
    printf("Agora, Escolha um Segundo Atributo para comparar (não pode ser  um Atributo já escolhido):\n");
    printf("1. Nome da cidade(não é comparavel)\n");
    if (opcao != 2)
    {
    printf("2. População\n");
    }
    if (opcao != 3)
    {
    printf("3. Area\n");
    }
    if (opcao != 4)
    {
    printf("4. PIB\n");
    }
    if (opcao != 5)
    {
    printf("5. Numero de Pontos Turisticos\n");
    }
    if (opcao != 6)
    {
    printf("6. Densidade Populacional\n");
    }
    scanf("%d", &opcao2);
    }

    switch (opcao){
    case 1:
        printf("Está opção é apenas o nome, não tem comparação");
        break;
    
    case 2:
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de População\n");
        printf("Cidade: %s - População: %lu\n", Cidade1, População1);
        printf("Cidade: %s - População: %lu\n", Cidade2, População2);
        atributo1 = (float) População1;
        atributo3 = (float) População2;

        if (População1 == População2){
            printf("Empate!\n");
        } else if (População1 > População2){
            printf("População da carta 1 é Maior!\n");
        } else {
            printf("População da carta 2 é Maior\n");
        }
        break;
    case 3:
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Area\n");
        printf("Cidade: %s - Area: %.2f\n", Cidade1, Area1);
        printf("Cidade: %s - Area: %.2f\n", Cidade2, Area2);
        atributo1 = (float) Area1;
        atributo3 = (float) Area2;

        if (Area1 == Area2){
            printf("Empate!\n");
        } else if (Area1 > Area2){
            printf("Area da carta 1 é Maior!\n");
        } else {
            printf("Area da carta 2 é Maior\n");
        }
        break;
    case 4:
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de PIB\n");
        printf("Cidade: %s - PIB: %.2f\n", Cidade1, PIB1);
        printf("Cidade: %s - PIB: %.2f\n", Cidade2, PIB2);
        atributo1 = (float) PIB1;
        atributo3 = (float) PIB2;
        if (PIB1 == PIB2){
            printf("Empate!\n");
        } else if (PIB1 > PIB2){
            printf("PIB da carta 1 é Maior!\n");
        } else {
            printf("PIB da carta 2 é Maior\n");
        }
        break;
    case 5:
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Numeros de Pontos Turisticos\n");
        printf("Cidade: %s - Pontos Turisticos: %d\n", Cidade1, Pontos_turisticos1);
        printf("Cidade: %s - Pontos Turisticos: %d\n", Cidade2, Pontos_turisticos2);
        atributo1 = (float) Pontos_turisticos1;
        atributo3 = (float) Pontos_turisticos2;
        if (Pontos_turisticos1 == Pontos_turisticos2){
            printf("Empate!\n");
        } else if (Pontos_turisticos1 > Pontos_turisticos2){
            printf("Carta 1 Tem Maior numero de pontos turisticos!\n");
        } else {
            printf("Carta 2 Tem Maior numero de pontos turisticos!\n");
        }
        break;
    case 6:
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Densidade Populacional\n");
        printf("Cidade: %s - Densidade Populacional: %.2f\n", Cidade1, Densidade_Populacional1);
        printf("Cidade: %s - Densidade Populacional: %.2f\n", Cidade2, Densidade_Populacional2);
        atributo1 = (float) Densidade_Populacional1;
        atributo3 = (float) Densidade_Populacional2;
        if (Densidade_Populacional1 == Densidade_Populacional2){
            printf("Empate!\n");
        } else if (Densidade_Populacional1 < Densidade_Populacional2){
            printf("Densidade Populacional da carta 1 é Menor(então ganhou)!\n");
        } else {
            printf("Densidade Populacional da carta 2 é Menor(então ganhou)!\n");
        }
        
    default:
    printf("Opção invalida!\n");
        break;
    }

    switch (opcao2){
    case 1:
        printf("Está opção é apenas o nome, não tem comparação");
        break;
    
    case 2:
    if (opcao == 2)
    {
        printf("Opção Invalida!\n");
    }else
    {
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de População\n");
        printf("Cidade: %s - População: %lu\n", Cidade1, População1);
        printf("Cidade: %s - População: %lu\n", Cidade2, População2);
        atributo2 = (float) População1;
        atributo4 = (float) População2;
    }
        if (População1 == População2){
            printf("Empate!\n");
        } else if (População1 > População2){
            printf("População da carta 1 é Maior!\n");
        } else {
            printf("População da carta 2 é Maior\n");
        }
        break;
    case 3:
    if (opcao == 3)
    {
        printf("Opção Invalida!\n");
    }else
    {
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Area\n");
        printf("Cidade: %s - Area: %.2f\n", Cidade1, Area1);
        printf("Cidade: %s - Area: %.2f\n", Cidade2, Area2);
        atributo2 = (float) Area1;
        atributo4 = (float) Area2;
    }    
        if (Area1 == Area2){
            printf("Empate!\n");
        } else if (Area1 > Area2){
            printf("Area da carta 1 é Maior!\n");
        } else {
            printf("Area da carta 2 é Maior\n");
        }
        break;
    case 4:
    if (opcao == 4)
    {
        printf("Opção Invalida!\n");
    }else
    {
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de PIB\n");
        printf("Cidade: %s - PIB: %.2f\n", Cidade1, PIB1);
        printf("Cidade: %s - PIB: %.2f\n", Cidade2, PIB2);
        atributo2 = (float) PIB1;
        atributo4 = (float) PIB2;
    }
        if (PIB1 == PIB2){
            printf("Empate!\n");
        } else if (PIB1 > PIB2){
            printf("PIB da carta 1 é Maior!\n");
        } else {
            printf("PIB da carta 2 é Maior\n");
        }
        break;
    case 5:
    if (opcao == 5)
    {
        printf("Opção Invalida!\n");
    }else
    {
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Numeros de Pontos Turisticos\n");
        printf("Cidade: %s - Pontos Turisticos: %d\n", Cidade1, Pontos_turisticos1);
        printf("Cidade: %s - Pontos Turisticos: %d\n", Cidade2, Pontos_turisticos2);
        atributo2 = (float) Pontos_turisticos1;
        atributo4 = (float) Pontos_turisticos2;
    }
        if (Pontos_turisticos1 == Pontos_turisticos2){
            printf("Empate!\n");
        } else if (Pontos_turisticos1 > Pontos_turisticos2){
            printf("Carta 1 Tem Maior numero de pontos turisticos!\n");
        } else {
            printf("Carta 2 Tem Maior numero de pontos turisticos!\n");
        }
        break;
    case 6:
    if (opcao == 6)
    {
        printf("Opção Invalida!\n");
    }else
    {
        printf("Carta 1 X Carta 2\n");
        printf("Comparação de Densidade Populacional\n");
        printf("Cidade: %s - Densidade Populacional: %.2f\n", Cidade1, Densidade_Populacional1);
        printf("Cidade: %s - Densidade Populacional: %.2f\n", Cidade2, Densidade_Populacional2);
        atributo2 = (float) Densidade_Populacional1;
        atributo4 = (float) Densidade_Populacional2;
    }
        if (Densidade_Populacional1 == Densidade_Populacional2){
            printf("Empate!\n");
        } else if (Densidade_Populacional1 < Densidade_Populacional2){
            printf("Densidade Populacional da carta 1 é Menor(então ganhou)!\n");
        } else {
            printf("Densidade Populacional da carta 2 é Menor(então ganhou)!\n");
        }
        
    default:
    printf("Opção invalida!\n");
        break;
    }

    if ((opcao >=2 || opcao <= 6) && (opcao2 >=2 || opcao2 <=6))
    {
        printf("Cartas 1 x Carta 2\n");
        printf("Soma dos Atributos\n");
        somacarta1 = atributo1 + atributo2;
        somacarta2 = atributo3 + atributo4;
        printf("Atributos Carta 1: %.2f\n", somacarta1);
        printf("Atributos Carta 2: %.2f\n", somacarta2);
        if (somacarta1 > somacarta2)
        {
           printf("Carta 1 tem os atributos maiores que Carta 2, Portanto Ganhou!\n");
        } else if (somacarta1 < somacarta2)
        {
           printf("Carta 1 tem os atributos maiores que Carta 2, Portanto Ganhou!\n");
        } else
            printf("Ouve um Empate!\n");

        
    } else
    {   printf("Você escolheu alguma opção errada, tente novamente!\n");
    }

    return 0;
}

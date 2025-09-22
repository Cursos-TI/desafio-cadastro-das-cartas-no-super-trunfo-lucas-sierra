#include <stdio.h>

//instruções: As variáveis serão separadas por comentarios e sinais (-----) para melhor utilização, manutenção e organização do código.
//Variável 1

int main() {
    int turistico_1;
    unsigned long int populacao_1;
    float PIB_1, area_1, PIBPercapita_1, densidade_1, SuperPoder_1;
    char estado_1 [3], carta_1 [4], cidade_1 [50];

//Término da váriável 1
//Variável 2

    int turistico_2;
    unsigned long int populacao_2;
    float PIB_2, area_2, PIBPercapita_2, densidade_2, SuperPoder_2;
    char estado_2 [3], carta_2 [4], cidade_2 [50];

//Término da váriável 2
//Início informações carta variável 1

    printf("Digite uma letra para representar o estado: \n");
    scanf(" %s", estado_1);

    printf("Digite o código da carta: \n");
    scanf(" %s", carta_1);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade_1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a área (em KM²): \n");
    scanf("%f", &area_1);

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &PIB_1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%i", &turistico_1);

    densidade_1 = (float)(populacao_1 / area_1);
    PIBPercapita_1 = (float)(PIB_1 / populacao_1);
    SuperPoder_1 = (float)(populacao_1 + area_1 + PIB_1 + turistico_1 + PIBPercapita_1 + densidade_1);

//Término informações carata variável 1
//Início visualização da carta 1

    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", carta_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área (em KM²): %.2f\n", area_1);
    printf("PIB (Produto Interno Bruto): %.2f\n", PIB_1);
    printf("Número de pontos turísticos: %i\n", turistico_1);
    printf("Densidade populacional é: %.2f\n", densidade_1);
    printf("O PIB per Capita é: %f\n\n", PIBPercapita_1);

//Término visualização da carta 1
//Início informações carta variável 2

    printf("Digite uma letra para representar o estado: \n");
    scanf(" %s", estado_2);

    printf("Digite o código da carta: \n");
    scanf(" %s", carta_2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade_2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a área (em KM²): \n");
    scanf("%f", &area_2);

    printf("Digite o PIB (Produto Interno Bruto): \n");
    scanf("%f", &PIB_2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico_2);

    densidade_2 = (float)(populacao_2 / area_2);
    PIBPercapita_2 = (float)(PIB_2 / populacao_2);
    SuperPoder_2 = (float)(populacao_2 + area_2 + PIB_2 + turistico_2 + PIBPercapita_2 + densidade_2);

//Término informações carta variável 2
//Início visualização da carta 2

    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", carta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área (em KM²): %.2f\n", area_2);
    printf("PIB (Produto Interno Bruto): %.2f\n", PIB_2);
    printf("Número de pontos turísticos: %d\n", turistico_2);
    printf("Densidade populacional é: %.2f\n\n", densidade_2);
    printf("O PIB per Capita é: %f\n\n", PIBPercapita_2);

//Término visualização da carta 2

//Comparação dos atributos
printf("Comparação dos atributos carta A e carta B \n\n");
printf("População: %d\n", populacao_1 > populacao_2);
printf("Área: %d\n", area_1 > area_2);
printf("PIB: %d\n", PIB_1 > PIB_2);
printf("Pontos Turísticos: %d\n", turistico_1 > turistico_2);
printf("Densidade Populacional: %d\n", densidade_1 < densidade_2);
printf("PIB per capita: %d\n", PIBPercapita_1 > PIBPercapita_2);
printf("Super Poder: %d\n", SuperPoder_1 > SuperPoder_2);

//Término da comparação dos atributos

    return 0;
}

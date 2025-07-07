#include <stdio.h>


int main () {

    // Declaração das variáveis (Atributos das cartas )
    char c1_estado, c2_estado;
    char c1_codigo[3], c2_codigo[3];
    char c1_cidade[10], c2_cidade[10];
    int c1_populacao, c2_populacao;
    float c1_area, c2_area;
    float c1_pib, c2_pib;
    int c1_pontos_turisticos, c2_pontos_turisticos;


    //Recebendo dados da Carta 1
    printf("Jogo Super Trunfo!\n");

    printf(">>>>> Carta 1 <<<<< \n");

    printf("Estado:");
    scanf(" %c", &c1_estado);

    printf("Codigo - de 01 a 04:");
    scanf("%s", c1_codigo);

    printf("Cidade: ");
    scanf("%s", c1_cidade);

    printf("População: ");
    scanf("%d", &c1_populacao);
    
    printf("Área: ");
    scanf("%f", &c1_area);
    
    printf("PIB: ");
    scanf("%f", &c1_pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &c1_pontos_turisticos);

    // Mostrando dados da Carta 1
    printf("\n\n\n");
    printf("**** Dados da primeira carta **** \n");
    printf("Estado: %c \n",c1_estado);
    printf("Codigo: %s \n", c1_codigo);
    printf("Nome da Cidade: %s\n", c1_cidade);
    printf("População: %d \n", c1_populacao);
    printf("Área: %f\n", c1_area);
    printf("PIB: %f\n",c1_pib);
    printf("Número de Pontos Turístios: %d\n", c1_pontos_turisticos);


    // /////////////////////////////////////////////////////////////////////


    //Recebendo dados da Carta 2
     printf("\n \n \n");

    printf(">>>>> Carta 2 <<<<< \n");

    printf("Estado:");
    scanf(" %c", &c2_estado);

    printf("Codigo - de 01 a 04:");
    scanf("%s", c2_codigo);

    printf("Cidade: ");
    scanf("%s", c2_cidade);

    printf("População: ");
    scanf("%d", &c2_populacao);
    
    printf("Área: ");
    scanf("%f", &c2_area);
    
    printf("PIB: ");
    scanf("%f", &c2_pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &c2_pontos_turisticos);

    // Mostrando dados da Carta 2

    printf("\n\n\n");
    printf("**** Dados da segunda carta **** \n");
    printf("Estado: %c \n",c2_estado);
    printf("Codigo: %s \n", c2_codigo);
    printf("Nome da Cidade: %s\n", c2_cidade);
    printf("População: %d \n", c2_populacao);
    printf("Área: %f\n", c2_area);
    printf("PIB: %f\n",c2_pib);
    printf("Número de Pontos Turístios: %d\n", c2_pontos_turisticos);


    return 0;


}

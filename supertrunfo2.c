#include <stdio.h>

    //Estrutura para armazenar os dados das cartas
struct CartaSuperTrunfo {
    char estado; //Letra de 'A' a 'H' 
    char Codigo[4]; //Código da carta (Ex: A01)
    char NomeCidade[50]; //Nome da Cidade
    int Populacao; //Número de habitantes
    float Area; //Área da cidade em km²
    float PIB; //PIB em bilhões de reais
    int PontosTuristicos; //Número de pontos turísticos
};

int main(){
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    printf("Cadastro da carta 1:\n"); //Inserção de dados da carta 1
    
    printf("Informe o estado (Letra de 'A' a 'H'): "); 
    scanf(" %c", &carta1.estado); 

    printf("Informe o código da carta: ");  
    scanf(" %s", &carta1.Codigo); 

    printf("Informe o nome da cidade: ");
    scanf("%s", &carta1.NomeCidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &carta1.Populacao);

    printf("Informe a área da cidade: ");
    scanf("%f", &carta1.Area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &carta1.PIB); 

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &carta1.PontosTuristicos);



    printf("Cadastro da carta 2:\n"); //Inserção de dados da carta 2

    printf("Informe o estado (Letra de 'A' a 'H'): "); 
    scanf(" %c", &carta2.estado); 

    printf("Informe o código da carta: ");  
    scanf(" %s", &carta2.Codigo); 

    printf("Informe o nome da cidade: ");
    scanf("%s", &carta2.NomeCidade);

    printf("Informe a população da cidade: ");
    scanf("%d", &carta2.Populacao);

    printf("Informe a área da cidade: ");
    scanf("%f", &carta2.Area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &carta2.PIB); 

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &carta2.PontosTuristicos);

    //Exibição dos dados
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.Codigo); 
    printf("nome da cidade: %s\n",carta1.NomeCidade);
    printf("População: %d\n", carta1.Populacao);
    printf("Área: %.2f km²\n", carta1.Area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Quantidade de pontos turísticos: %d\n", carta1.PontosTuristicos);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.Codigo); 
    printf("nome da cidade: %s\n",carta2.NomeCidade);
    printf("População: %d\n", carta2.Populacao);
    printf("Área: %.2f km²\n", carta2.Area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Quantidade de pontos turísticos: %d\n", carta2.PontosTuristicos);

    return 0;

}

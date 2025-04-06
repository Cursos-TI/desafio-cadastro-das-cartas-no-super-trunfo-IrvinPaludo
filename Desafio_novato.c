#include <stdio.h>
#include <stdlib.h>

int main(){
    char Estado1[3];
    char codigo_Carta1[10];
    char Nome_cidade1[100];
    int Popula1;
    float Area_km1;
    float Pib1;
    int Pon_Turis1;
    
    char Estado2[3];
    char codigo_Carta2[10];
    char Nome_cidade2[100];
    int Popula2;
    float Area_km2;
    float Pib2;
    int Pon_Turis2;

    printf("Ola, vamos prencher suas cartas\n");

    printf("Digite a abreviasao do estado: ");
    scanf("%s", Estado1);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%s",codigo_Carta1);
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    fgets(Nome_cidade1, sizeof(Nome_cidade1), stdin);
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &Popula1);

    printf("Arae em Km²:");
    scanf("%f", &Area_km1);

    printf("PIB: ");
    scanf("%f", &Pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &Pon_Turis1);

    printf("\nSegonda carta\n");

    printf("Digite a abreviasao do estado: ");
    scanf("%s", Estado2);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%s",codigo_Carta2);
    while (getchar() != '\n');

    printf("Nome da sidade: ");
    fgets(Nome_cidade2, sizeof(Nome_cidade2), stdin);
    Nome_cidade2[strcspn(Nome_cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &Popula2);

    printf("Arae em Km²:");
    scanf("%f", &Area_km2);

    printf("PIB: ");
    scanf("%f", &Pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &Pon_Turis2);


    printf("\nAscartas foram:\n");

    printf("\n Carta 01:\n Estado: %s\n Codigo: %s\n Cidade:%s\n Populacao: %d \n Area: %f Km² \n PIB: %f bilhoes \n, Pontos Turisticos: %d \n ",Estado1, codigo_Carta1, Nome_cidade1, Popula1, Area_km1, Pib1, Pon_Turis1);

    printf("\n Carta 02:\n Estado: %s\n Codigo: %s\n Cidade:%s\n Populacao: %d \n Area: %f Km² \n PIB: %f bilhoes\n Pontos Turisticos: %d \n ",Estado2, codigo_Carta2, Nome_cidade2, Popula2, Area_km2, Pib2, Pon_Turis2);

    return 0;
}
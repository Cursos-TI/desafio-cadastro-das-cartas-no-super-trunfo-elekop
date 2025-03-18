#include <stdio.h>
int main() {
 
char estado [3]; // Supondo que "estado" armazena a sigla (ex: "SP")
char codigo_da_carta[50];
char nome_da_cidade[50];
float area_em_km;
int populacao ;
float pib ;
int pontos_turisticos;

printf("digite o estado (somente sigla)\n");
scanf("%s", estado);

printf("digite o codigo de carta \n");
scanf("%s",codigo_da_carta);

printf("digite o codigo da carta \n");
scanf("%s",nome_da_cidade);

printf("digite a area em km² \n");
scanf("%f", &area_em_km);

printf("digite a populacao \n");
scanf("%d",&populacao);

printf("digite o pib \n");
scanf("%f",&pib);

printf("digite a qauntidade de pontos turisticos \n");
scanf("%d",&pontos_turisticos);



    return 0;
}

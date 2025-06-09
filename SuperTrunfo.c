#include <stdio.h>

int main() {
    // Variáveis para a carta 1
    char estado1; //Estado (A-H)
    char codigo1[5]; //Código da carta (exemplo: A01)
    char nomeCidade1[50]; //Nome da cidade
    int populacao1; //População
    float area1; // Área em km²
    float pib1; //PIB
    int pontosTuristicos1; //Número de pontos turísticos

    // Variáveis para a carta 2
    char estado2; //Estado (A-H)
    char codigo2; //Código da carta
    char nomeCidade2[50]; //Nome da cidade
    int populacao2; //População
    float area2; //Área em km²
    float pib2; //PIB
    int pontosTuristicos2; //Número de pontos turísticos

    //Instruções para o usuário
    printf ("Vamos cadastrar as informações da carta 1:\n");
    printf ("Digite o Estado (uma letra de A a H):");
    scanf ("%c",&estado1);
    printf ("Digite o código da carta (exemplo: A01):");
    scanf ("%s", codigo1);
    printf ("Digite o Nome da Cidade: ");
    scanf ("%[^\n]", nomeCidade1);
    printf ("Digite a População: ");
    scanf ("%d", &populacao1);
    printf ("Digite a Área (em km²): ");
    scanf ("%f", &area1);
    Printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &pib1);
    printf ("Digite o Número de Pontos Turísticos: ");
    scanf ("%d", &pontosTuristicos1);

    printf ("\nVamos cadastrar as informações da carta 2:\n");
    printf ("Digite o Estado (uma letra de A a H): ");
    scanf ("%c", &estado2);
    printf ("Digite o código da carta (exemplo: B02):");
    scanf ("%s", codigo2);
    printf ("Digite o Nome da Cidade: ");
    scanf ("[^\n]", nomeCidade2);
    printf ("Digite a População: ");
    scanf ("%d", &populacao2);
    printf ("Digite a Área (em km²): ");
    scanf ("%f", &area2);
    printf ("Digite o PIB (em bilhões de reais): ");
    scanf ("%f", &pib2);
    printf ("Digite o Número de Pontos Turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    //Exibição das informações da Carta 1
    printf ("\nCarta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição das informações da Carta 2
    printf ("\nCarta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
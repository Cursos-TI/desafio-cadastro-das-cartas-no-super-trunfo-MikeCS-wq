#include <stdio.h>

//Definindo a estrutura de dados para armazenar os dados de cada cidade

typedef struct {
    char codigo[4];             //código da cidade( A01, A02)
    int populacao;              //População da cidade
    float area;                 //Área da cidade
    float pib;                  //PIB da cidade
    int pontosTuristicos;       //Número de pontos turísticos

} Cidade;

int main() {
    
    //Definição da quntidade de cidades a serem cadastradas
    int numCidades = 8;  //número de cidades que iremos cadastrar
    Cidade cidades[numCidades]; //array de cidades = vamos armazenas multiplas cidades

//cadastro das cartas
for (int i = 0; i < numCidades; i++) {
    //informando numero da cidade
    printf("Cadastro da cidade %d:\n", i + 1);

    //lendo o código da cidade
    printf("Digite o código da cidade (exemplo A01): ");
    scanf("%s", cidades[i].codigo);

    //lendo os dados da cidade
    printf("Digite a população:");
    scanf("%d", &cidades[i].populacao);

    printf("Digite a àrea(em km):");
    scanf("%f", &cidades[i].area);

    printf("Digite o PIB (em milhões):");
    scanf("%f", &cidades[i].pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &cidades[i].pontosTuristicos);

    printf("\n");       //linha em branco para separa os cadastros
}

//exibir os dados cadastrados pelo usuário
printf("\nDados cadastrados:\n");
for (int i = 0; i < numCidades; i++) {
    printf("Cidade %d - Código: %s\n", i + 1, cidades[i].codigo);
    printf("Populacao: %d\n", cidades[i].populacao);
    printf("Área: %.2f km\n", cidades[i].area);
    printf("PIB: %2f milhões\n", cidades[i].pib);
    printf("Pontos turísticos: %d\n", cidades[i].pontosTuristicos);
    printf("\n");
}
 return 0;
}

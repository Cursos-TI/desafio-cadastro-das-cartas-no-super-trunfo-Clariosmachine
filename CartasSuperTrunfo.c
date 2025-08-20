#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Carta 1:
    char c1_estado;
    char c1_codigo[3];
    char c1_nomeDaCidade[50];
    int c1_população;
    float c1_area;
    int c1_pib;
    int c1_numedoDePontosTuristicos;

    //Carta 2:
    char c2_estado;
    char c2_codigo[3];
    char c2_nomeDaCidade[50];
    int c2_população;
    float c2_area;
    int c2_pib;
    int c2_numedoDePontosTuristicos;

    printf("Informe o Estado da Cidade_01 (um caractere de 'A a Z'): \n");
    scanf("%c", c1_estado);
    printf("Informe o código da Cidade_01 (O Estado + o número): \n");
    scanf("%s", c1_codigo);
    printf("Informe o nome da Cidade_01 (até 50 caracteres): \n");
    scanf("%s", c1_nomeDaCidade);
    printf("Digite o número da população da Cidade_01: \n");
    scanf("%d", &c1_população);
    printf("Digite a área em km2 da Cidade_01: \n");
    scanf("%f", &c1_area);
    printf("Informe o PIB da Cidade_01: \n");
    scanf("%d", &c1_pib);
    printf("Digite o número de pontos turísticos da Cidade_01 \n");
    scanf("%d", &c1_numedoDePontosTuristicos);

    //prints da cidade_01
    printf("UF %c\n", c1_estado);
    printf("Código %s\n", c1_codigo);
    printf("Nome da cidade_01: %s\n", c1_nomeDaCidade);

    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

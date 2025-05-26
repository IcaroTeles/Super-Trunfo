#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Novato

//Teste Ícaro Teles

int main() {
    // Definição de varáveis dos códigos e atributos das cidades:

    char estado1, estado2, cidade1[20], cidade2[20], codigo1[2], codigo2[2];
    int  pontos1, pontos2, populacao1, populacao2;
    float area1, area2, pib1, pib2;

    // CADASTRO CARTA 1: diálogos de interação e scan de respostas:

    printf("Olá! Tudo bem? Você está na página de cadastro da sua primeira Carta. Aqui faremos algumas perguntas para que você preencha com dados.\n");

    printf("Diga o código do Estado da sua carta (letras entre A e H).\n");
    scanf(" %c", &estado1);

    printf("Ótimo, agora indique o número da cidade (entre 01 a 04)\n");
    scanf(" %s", codigo1);

    printf("Show! E qual o nome da cidade?\n");
    scanf("%s", cidade1);

    printf("Certinho, agora pedirei algumas informações sobre a cidade.\n");

    printf("Qual a população total dela?\n");
    scanf(" %d", &populacao1);

    printf("E qual a área total dela em m²?\n");
    scanf("%f", &area1);

    printf("Certo, estamos quase terminando!\nMe diz agora o PIB dessa cidade.\n");
    scanf("%f", &pib1);

    printf("E, por último, quantos pontos turísticos ela tem?\n");
    scanf("%d", &pontos1);

    // Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Agora vou colocar todas as infos aqui embaixo:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.f m²\n", area1);  
    printf("PIB: R$%.f \n", pib1); 
    printf("Pontos Turísticos: %d\n", pontos1);
    
    //Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\n");

    //CADASTRO CARTA 2: diálogos de interação e scan de respostas:

    printf("Agora vamos cadastrar nossa segunda carta!\n");

    printf("Diga o código do Estado da Carta 2 (letras entre A e H).\n");
    scanf(" %c", &estado2);

    printf("Ótimo, agora indique o número da cidade (entre 1 a 4)\n");
    scanf(" %s", codigo2);

    printf("Show! E qual o nome da cidade?\n");
    scanf(" %s", cidade2);

    printf("Qual a população total dela?\n");
    scanf(" %d", &populacao2);

    printf("E qual a área total dela em m²?\n");
    scanf("%f", &area2);

    printf("Certo, estamos quase terminando!\nMe diz agora o PIB dessa cidade.\n");
    scanf("%f", &pib2);

    printf("E, por último, quantos pontos turísticos ela tem?\n");
    scanf("%d", &pontos2);

    // Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Agora vou colocar todas as infos aqui embaixo:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.f m²\n", area2);  
    printf("PIB: R$%.f \n", pib2); 
    printf("Pontos Turísticos: %d\n", pontos2);
    
    //Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\nEspero que todas as informações estejam corretas!\n");


    return 0;
}

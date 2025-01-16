#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Novato

//Teste Ícaro Teles

int main() {
    // Definição de varáveis do código e atributos da cidade:

    char estado, cidade[15];
    int  pontos, codigo, populacao, area, pib;

    // Área de Cadastro das Cartas, diálogos de interação e scan de respostas:

    printf("Olá! Tudo bem? Você está na página de cadastro de cartas. Aqui faremos algumas perguntas para que você preencha com dados.\n");
    printf("Diga o código do Estado da sua carta (letras entre A e H).\n");
    scanf("%c", &estado);

    printf("Ótimo, agora indique o número da cidade (entre 1 a 4)\n");
    scanf("%d", &codigo);

    printf("Show! E qual o nome da cidade?\n");
    scanf("%s", &cidade);

    printf("Certinho, agora pedirei algumas informações sobre a cidade.\n");
    printf("Qual a população total dela?\n");
    scanf("%d", &populacao);

    printf("E qual a área total dela em m²?\n");
    scanf("%d", &area);

    printf("Certo, estamos quase terminando!\nMe diz agora, em milhões, o PIB dessa cidade.\n");
    scanf("%d", &pib);

    printf("E, por último, quantos pontos turísticos ela tem?\n");
    scanf("%d", &pontos);

    // Exibição dos Dados das Cartas:

    printf("Acabamos o nosso cadastro! Agora vou colocar todas as infos aqui embaixo:\n");
    printf("Sua carta cadastrada é a de código: %c%d \nNome da cidade: %s \nPopulação: %d habitantes \nÁrea: %dm² \nPib: %d Milhões \nPontos Turísticos: %d \n", estado,codigo,cidade,populacao,area,pib,pontos);
    
    //Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\nEspero que todas as informações estejam corretas!\n");

    return 0;
}

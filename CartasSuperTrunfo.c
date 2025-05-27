#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Novato

//Teste Ícaro Teles

int main() {
    // Definição de varáveis dos códigos e atributos das cidades:

    char estado1, estado2, cidade1[30], cidade2[30], codigo1[4], codigo2[4];
    int  pontos1, pontos2, populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapta1, percapta2, super1, super2, resultado;

    // CADASTRO CARTA 1: diálogos de interação e scan de respostas:

    printf("Olá! Tudo bem? Você está na página de cadastro da sua CARTA 1. Aqui faremos algumas perguntas para que você preencha com dados.\n");

    printf("Diga o código do Estado da sua carta (letras entre A e H).\n");
    scanf(" %c", &estado1);

    printf("Ótimo, agora indique o número da cidade (entre 01 a 04)\n");
    scanf(" %s", codigo1);

    printf("Show! E qual o nome da cidade?\n");
    scanf(" %s", cidade1);

    printf("Certinho, agora pedirei algumas informações sobre a cidade.\n");

    printf("Qual a população total dela?\n");
    scanf(" %d", &populacao1);

    printf("E qual a área total dela em m²?\n");
    scanf("%f", &area1);

    printf("Certo, estamos quase terminando!\nMe diz agora o PIB dessa cidade.\n");
    scanf("%f", &pib1);

    printf("E, por último, quantos pontos turísticos ela tem?\n");
    scanf("%d", &pontos1);

    //CALCULO DE DENSIDADE E PER CAPTA

    densidade1 = (float)area1 / populacao1;
    percapta1= (float) pib1 / populacao1;

    // Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Essa é a sua CARTA 1:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f m²\n", area1);
    printf("Densidade Demográfica de: %.2f pessoas/m²\n", densidade1);   
    printf("PIB: R$%.2f \n", pib1);
    printf("PIB per Capta: R$%.2f \n", percapta1); 
    printf("Pontos Turísticos: %d\n", pontos1);
    
    //Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\n");

    //CADASTRO CARTA 2: diálogos de interação e scan de respostas:

    printf("Agora vamos cadastrar sua CARTA 2!\n");

    printf("Diga o código do Estado da CARTA 2 (letras entre A e H).\n");
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

    //CALCULO DE DENSIDADE E PER CAPTA

    densidade2 = (float) area2 / populacao2;
    percapta2 = (float) pib2 / populacao2;

    // Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Essa é a sua CARTA 2:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("Densidade Demográfica de: %.2f pessoas/m²\n", densidade2);  
    printf("PIB: R$%.2f \n", pib2);
    printf("PIB per Capta: R$%.2f \n", percapta2);  
    printf("Pontos Turísticos: %d\n", pontos2);
    
    //Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\nEspero que todas as informações estejam corretas!\n");

    // CALCULO VS DE CADA CARTA

     super1 = populacao1 + area1 + (1/densidade1) + pib1 + percapta1 + pontos1;
     super2 = populacao2 + area2 + (1/densidade2) + pib2 + percapta2 + pontos2;

    // VERSÃO DESAFIO 1 - INATIVADA PARA IMPLEMENTAÇÃO DO DESAFIO 2 (IF -ELSE)

    //printf ("Faremos agora o duelo entre as Cartas! se o número que aparecer foi 1, a campeã é CARTA 1 \n");
    //printf ("Se a o número 0 aparecer, a vencedora é a CARTA 2." );
    //printf("\nRESULTADO:\n");
    //printf("População:%d \n", populacao1 > populacao2);
    //printf("Área: %d \n", area1 > area2);
    //printf("Densidade Demográfica:%d \n", (1/densidade1) > (1/densidade2) );  
    //printf("PIB:%d \n", pib1 > pib2);
    //printf("PIB per Capta:%d \n", percapta1 > percapta2);  
    //printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    //printf("Super Poder:%d \n", super1 > super2);

    //IMPLEMENTAÇÃO DE IF-ELSE NA COMPARAÇÃO DE CARTAS

    printf ("\nFaremos agora o duelo entre as Cartas!\n");

    // COMPARAÇÃO POPULAÇÃO
    printf ("\nPOPULAÇÃO:\n");
    if (populacao1 > populacao2) {
        printf("\nPopulação da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nPopulação da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO ÁREA
    printf ("\nÁREA:\n");

    if (area1 > area2) {
        printf("\nÁrea da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nÁrea da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO DENSIDADE DEMOGRÁFICA
    printf ("\nDENSIDADE DEMOGRÁFICA:\n");

    if (1/densidade1 > 1/densidade2) {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n",cidade2, densidade2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO PIB
    printf ("\nPIB:\n");

    if (pib1 > pib2) {
        printf("\nPib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nPib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO RENDA PER CAPTA
    printf ("\nRENDA PER CAPTA:\n");

    if (percapta1 > percapta2) {
        printf("\nRenda per capta da cidade %s:R$ %.2f \n", cidade1, percapta1);
        printf("Renda per capta da cidade %s:R$ %.2f \n", cidade2, percapta2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nRenda per capta da cidade %s:R$ %.2f \n", cidade1, percapta1);
        printf("Renda per capta da cidade %s:R$ %.2f \n", cidade2, percapta2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO PONTOS TURÍSTICOS
    printf ("\nPONTOS TURÍSTICOS:\n");

    if (pontos1 > pontos2) {
        printf("\nPontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nPontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }

    // COMPARAÇÃO SUPER PODER
    printf ("\nSUPER PODER:\n");
    
    if (super1 > super2) {
        printf("\nSuper Poder da cidade %s: %.2f \n", cidade1, super1);
        printf("Super Poder da cidade %s: %.2f \n", cidade2, super2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else {
        printf("\nSuper Poder da cidade %s: %.2f \n", cidade1, super1);
        printf("Super Poder da cidade %s: %.2f \n", cidade2, super2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }




    return 0;
}

#include <stdio.h>

int main() {
    // ========== Definição de varáveis:

    char estado1, estado2, cidade1[30], cidade2[30], codigo1[4], codigo2[4];
    int  pontos1, pontos2, populacao1, populacao2, novamente;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapta1, percapta2, super1, super2, resultado;

    // ========== CADASTRO CARTA 1: diálogos de interação e scan de respostas:

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

    //========== CALCULO DE DENSIDADE E PER CAPTA

    densidade1 = (float)populacao1 / area1;
    percapta1 = (float) pib1 / populacao1;

    //==========  Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Essa é a sua CARTA 1:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f m²\n", area1);
    printf("Densidade Demográfica de: %.2f pessoas/m²\n", densidade1);   
    printf("PIB: R$%.2f \n", pib1);
    printf("PIB per Capta: R$%.2f \n", percapta1); 
    printf("Pontos Turísticos: %d\n", pontos1);
    
    //========== Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\n");

    //========== CADASTRO CARTA 2: diálogos de interação e scan de respostas:

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

    //========== CALCULO DE DENSIDADE E PER CAPTA

    densidade2 = (float) populacao2 / area2;
    percapta2 = (float) pib2 / populacao2;

    //==========  Exibição dos Dados das Cartas:

    printf("\nAcabamos o nosso cadastro! Essa é a sua CARTA 2:\n");
    printf("Sua carta cadastrada é a de código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("Densidade Demográfica de: %.2f pessoas/m²\n", densidade2);  
    printf("PIB: R$%.2f \n", pib2);
    printf("PIB per Capta: R$%.2f \n", percapta2);  
    printf("Pontos Turísticos: %d\n", pontos2);
    
    //========== Saudação Final de confirmação:

    printf("\nCarta cadastrada com sucesso!\nEspero que todas as informações estejam corretas!\n");

    //==========  CALCULO SUPER PODER DE CADA CARTA

     super1 = populacao1 + area1 + densidade1 + pib1 + percapta1 + pontos1;
     super2 = populacao2 + area2 + densidade2 + pib2 + percapta2 + pontos2;

    #pragma region VERSÕES ANTERIORES COMENTADAS

    // VERSÃO DESAFIO 1 COMPARAÇÃO DE CARTAS - INATIVADA PARA IMPLEMENTAÇÃO DO DESAFIO 2 (IF -ELSE)

    /*
    printf ("Faremos agora o duelo entre as Cartas! se o número que aparecer foi 1, a campeã é CARTA 1 \n");
    printf ("Se a o número 0 aparecer, a vencedora é a CARTA 2." );
    printf("\nRESULTADO:\n");
    printf("População:%d \n", populacao1 > populacao2);
    printf("Área: %d \n", area1 > area2);
    printf("Densidade Demográfica:%d \n", (1/densidade1) > (1/densidade2) );  
    printf("PIB:%d \n", pib1 > pib2);
    printf("PIB per Capta:%d \n", percapta1 > percapta2);  
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Super Poder:%d \n", super1 > super2);
    

    //IMPLEMENTAÇÃO DE IF-ELSE NA COMPARAÇÃO DE CARTAS - DESATIVADA PARA IMPLEMENTAÇÃO DE MENU INTERATIVO

    
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

    if (densidade1 > densidade2) {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n",cidade2, densidade2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    } else {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
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

     COMPARAÇÃO RENDA PER CAPTA
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

     COMPARAÇÃO PONTOS TURÍSTICOS
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
    

    // INICIANDO O MENU INTERATIVO DE COMPARAÇÃO
    
    int opcao;
    printf ("Selecione qual atributo você deseja comparar!\n");
    printf ("1 - Quero saber o nome das cidades de cada carta.\n");
    printf ("2- POPULAÇÃO!\n");
    printf ("3- ÁREA!\n");
    printf ("4- PIB!!\n");
    printf ("5- PONTOS TURÍSTICOS!\n");
    printf ("6- DENSIDADE DEMOGRÁFICA!\n");
    printf ("Escolha sua opção: ");
    scanf ("%d", &opcao);

    //SWITCH DE OPÇÕES - DESATIVADO PARA IMPLEMENTAÇÃO DA ESCOLHA E COMPARAÇÃO DE DOIS ATRIBUTOS
    
    switch (opcao){
    case 1:
        printf ("A Carta 1 é a cidade: %s",cidade1);
        printf ("A Carta 2 é a cidade: %s",cidade2);
        break;
    case 2:
        if (populacao1 > populacao2) {
        printf("\nPopulação da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else if (populacao1 == populacao2){
        printf("\nPopulação da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        printf("Empatou!\n");
    } else {
        printf("\nPopulação da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }
        break;
    case 3:
        if (area1 > area2) {
        printf("\nÁrea da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else if (area1 == area2) {
        printf("\nÁrea da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        printf("Empatou!\n");
    } else {
        printf("\nÁrea da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }
        break;
    case 4:
        if (pib1 > pib2) {
        printf("\nPib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else if (pib1 == pib2) {
        printf("\nPib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        printf("Empatou!\n");
    } else {
        printf("\nPib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }
        break;
    case 5:
        if (pontos1 > pontos2) {
        printf("\nPontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    } else if (pontos1 == pontos2) {
        printf("\nPontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        printf("Empatou!\n");
    } else {
        printf("\nPontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    }
        break;
    case 6:
        if (densidade1 > densidade2) {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n",cidade2, densidade2);
        printf ("A vencedora é a carta 2 - %s!\n", cidade2);
    } else if (densidade1 == densidade2) {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        printf("Empatou!\n");
    } else {
        printf("\nDensidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        printf ("A vencedora é a carta 1 - %s!\n", cidade1);
    }
        break;
    
    default:
        printf ("Opção Inválida!");
        break;
    }    
    */

    #pragma endregion

    printf ("\nFaremos agora o duelo entre as Cartas!\n");

    //==========  IMPLEMENTAÇÃO DA COMPARAÇÃO DE DOIS ATRIBUTOS

    //==========  MENU PRIMEIRO ATRIBUTO
    //========== IMPLEMENTAÇÃO DO-WHILE PARA LOOP DE JOGO
    
    do {
    int opcao1, opcao2, resultado1, resultado2;

    printf ("\nSelecione qual o PRIMEIRO atributo você deseja comparar!\n");
    printf ("1- POPULAÇÃO!\n");
    printf ("2- ÁREA!\n");
    printf ("3- PIB!!\n");
    printf ("4- PONTOS TURÍSTICOS!\n");
    printf ("5- DENSIDADE DEMOGRÁFICA!\n");
    printf ("Escolha sua opção: ");
    scanf ("%d", &opcao1);

    //==========  SWITCH MENU PRIMEIRO ATRIBUTO

    switch (opcao1){
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        printf("\nVocê escolheu como primeiro atributo POPULAÇÃO!\n");
        printf("População da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        break;
    
    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        printf("\nVocê escolheu como primeiro atributo ÁREA!\n");
        printf("Área da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        break;

    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        printf("\nVocê escolheu como primeiro atributo PIB!\n");
        printf("Pib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        break;

    case 4:
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        printf("\nVocê escolheu como primeiro atributo PONTOS TURÍSTICOS!\n");
        printf("Pontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        break;

    case 5:
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        printf("\nVocê escolheu como primeiro atributo DENSIDADE DEMOGRÁFICA!\n");
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        break;

    default:
        printf ("\nOpção Inválida!");
        break;
    }

    //==========  INDICAÇÃO DE VENCEDOR ATRIBUTO 1

    if (resultado1 == 1){
        printf ("A vencedora do atributo 1 é a carta 1 - %s!\n", cidade1);
    } else {
       printf ("A vencedora do atributo 1 é a carta 2 - %s!\n", cidade2); 
    }
    
    //==========  MENU DO SEGUNDO ATRIBUTO

    printf ("\nSelecione o SEGUNDO atributo você deseja comparar!\n");
    printf ("1- POPULAÇÃO!\n");
    printf ("2- ÁREA!\n");
    printf ("3- PIB!!\n");
    printf ("4- PONTOS TURÍSTICOS!\n");
    printf ("5- DENSIDADE DEMOGRÁFICA!\n");
    printf ("Escolha sua opção: ");
    scanf ("%d", &opcao2);

    //========== SWITCH MENU SEGUNDO ATRIBUTO

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo! PRESTE ATENÇÃO DA PRÓXIMA VEZ!");
    } else {
        switch (opcao2){
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        printf("Você escolheu como segundo atributo POPULAÇÃO!\n");
        printf("População da cidade %s : %d habitantes\n", cidade1, populacao1);
        printf("População da cidade %s : %d habitantes\n", cidade2, populacao2);
        break;
    
    case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        printf("Você escolheu como segundo atributo ÁREA!\n");
        printf("Área da cidade %s: %.2f m²\n", cidade1, area1);
        printf("Área da cidade %s: %.2f m²\n", cidade2, area2);
        break;

    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        printf("Você escolheu como segundo atributo PIB!\n");
        printf("Pib da cidade %s:R$ %.2f \n", cidade1, pib1);
        printf("Pib da cidade %s:R$ %.2f \n", cidade2, pib2);
        break;

    case 4:
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        printf("Você escolheu como segundo atributo PONTOS TURÍSTICOS!\n");
        printf("Pontos Turísticos da cidade %s: %d \n", cidade1, pontos1);
        printf("Pontos Turísticos da cidade %s: %d \n", cidade2, pontos2);
        break;

    case 5:
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        printf("Você escolheu como segundo atributo DENSIDADE DEMOGRÁFICA!\n");
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade1, densidade1);
        printf("Densidade da cidade %s: %.2f pessoas/m²\n", cidade2, densidade2);
        break;

    default:
        printf ("Opção Inválida!");
        break;
    }
    }

    //==========  INDICAÇÃO DE VENCEDOR ATRIBUTO 2

    if (resultado2 == 1){
        printf ("A vencedora do atributo 2 é a carta 1 - %s!\n", cidade1);
    } else {
       printf ("A vencedora do atributo 2 é a carta 2 - %s!\n", cidade2); 
    }

    //==========  CÁCULO E DEFINIÇÃO DO RESULTADO

    if (resultado1 && resultado2){
        printf("\n### A GRANDE VENCEDORA foi a carta 1! - %s! ###\n", cidade1);
    } else if (resultado1 != resultado2){
        printf ("\n### Olha só! Deu empate ###!\n");
    } else {
        printf ("\n### A GRANDE VENCEDORA foi a carta 2! - %s! ###\n", cidade2);
    }

    // ========== MENU DE REPETIR JOGO
    
    printf("\nGostaria de jogar novamente?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    printf ("Escolha sua opção: ");
    scanf ("%d", &novamente);

} while ( novamente == 1);

printf(" ### Obrigado por jogar! ###");

    return 0;
}

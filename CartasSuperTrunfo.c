  #include <stdio.h>

int main(){
  // Card 1
char estado[3];
char codigocarta[10];
char nomecidade[50];
int populacao;
float area;
float pib;
int quantpontoturistico;

//Card 2
char estado2[3];
char codigocarta2[10];
char nomecidade2[50];
int populacao2;
float area2;
float pib2;
int quantpontoturistico2;



printf("*************************CADASTRO CIDADES************************** \n");
printf("          PREENCHA OS CAMPOS CONFORME OS DADOS SOLICITADOS \n");

printf("**********CIDADE 01********\n");

printf("DIGITE A SIGLA DO ESTADO: \n");
scanf("%2s", &estado);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%9s", &codigocarta);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%49s", &nomecidade);

printf("DIGITE A QUANTIDADE DE HABITANTES: \n");
scanf("%d", &populacao);

printf("DIGITE A AREA TOTAL DA CIDADE: \n");
scanf("%f", &area);

printf("DIGITE O PIB DA CIDADE: \n");
scanf("%f", &pib);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &quantpontoturistico);

printf("**********CIDADE 02********\n");

printf("DIGITE A SIGLA DO ESTADO: \n");
scanf("%2s", &estado2);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%9s", &codigocarta2);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%49s", &nomecidade2);

printf("DIGITE A QUANTIDADE DE HABITANTES: \n");
scanf("%d", &populacao2);

printf("DIGITE A AREA TOTAL DA CIDADE: \n");
scanf("%f", &area2);

printf("DIGITE O PIB DA CIDADE: \n");
scanf("%f", &pib2);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &quantpontoturistico2);

//exibe os cards cadastrados
printf("*******CARDS DE CIDADES CADASTRADAS*****\n");

printf("CARD 01 \n");
printf("ESTADO: %s\n", estado);
printf("CARTAO: %s\n", codigocarta);
printf("NOME CIDADE: %s\n", nomecidade);
printf("POPULACAO: %d\n", populacao);
printf("AREA: %f\n", area);
printf("PIB: %f\n", pib);
printf("NUMERO PONTOS TURISTICOS: %d\n", quantpontoturistico);


printf("CARD 02 \n");
printf("ESTADO: %s\n", estado2);
printf("CARTAO: %s\n", codigocarta2);
printf("NOME CIDADE: %s\n", nomecidade2);
printf("POPULACAO: %d\n", populacao2);
printf("AREA: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("NUMERO PONTOS TURISTICOS: %d\n", quantpontoturistico2);

return 0;
} 

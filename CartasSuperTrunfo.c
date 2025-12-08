  #include <stdio.h>

int main(){
  // Card 1
char estado[3];
char codigocarta[10];
char nomecidade[50];
unsigned int populacao;
float area;
float pib;
int quantpontoturistico;

//Card 2
char estado2[3];
char codigocarta2[10];
char nomecidade2[50];
unsigned int populacao2;
float area2;
float pib2;
int quantpontoturistico2;

//Calculos
float densidade1, densidade2;
float percapta1, percapta2;
float superpoder1, superpoder2;




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

densidade1=(populacao / area);
densidade2=(populacao2 / area2);
percapta1=(pib / populacao);
percapta2=(pib2 / populacao2);
superpoder1=(float)(populacao+area+pib+quantpontoturistico+(1/densidade1)+percapta1);
superpoder2=(float)(populacao2+area2+pib2+quantpontoturistico2+(1/densidade2)+percapta2);
//exibe os cards cadastrados
printf("*******CARDS DE CIDADES CADASTRADAS*****\n");

printf("CARD 01 \n");
printf("ESTADO: %s\n", estado);
printf("CARTAO: %s\n", codigocarta);
printf("NOME CIDADE: %s\n", nomecidade);
printf("POPULACAO: %u\n", populacao);
printf("AREA: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("NUMERO PONTOS TURISTICOS: %d\n", quantpontoturistico);
printf("DENSIDADE POPULACIONAL: %.2f \n", densidade1);
printf("PIB PER CAPITA: %.2f\n", percapta1);

printf("CARD 02 \n");
printf("ESTADO: %s\n", estado2);
printf("CARTAO: %s\n", codigocarta2);
printf("NOME CIDADE: %s\n", nomecidade2);
printf("POPULACAO: %u\n", populacao2);
printf("AREA: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("NUMERO PONTOS TURISTICOS: %d\n", quantpontoturistico2);
printf("DENSIDADE POPULACIONAL: %.2f \n", densidade2);
printf("PIB PER CAPITA: %.2f\n", percapta2);


// exibe a comparação das cartas
printf("****COMPARAÇAO CARTA****\n");

printf("---POPULAÇAO---\n");
printf("Card 01 - %s população: %u \n", nomecidade, populacao);
printf("Card 02 - %s população: %u \n", nomecidade2, populacao2);

if (populacao>populacao2)
{
  printf("A cidade %s e vencedora", nomecidade);
}else{
  printf("A cidade %s e vencedora", nomecidade2);
}

printf("---AREA---\n");
printf("Card 01 - %s area: %f \n", nomecidade, area);
printf("Card 02 - %s area: %f \n", nomecidade2, area2);

if (area>area2)
{
  printf("A cidade %s e vencedora", nomecidade);
}else{
  printf("A cidade %s e vencedora", nomecidade2);
}


return 0;
} 


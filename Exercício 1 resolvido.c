#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL ,"portuguese");
	
char nome [5][200];
int i,idade [5];
float peso [5];
float altura [5];	
float maiorAltura = 0, menorAltura = 999;
float maiorPeso = 0, menorPeso = 999;
int maiorIdade = 0, menorIdade = 999;	
char nomeMaiorAltura[250];
char nomeMenorAltura[250];
char nomeMaiorPeso[250];
char nomeMenorPeso[250];
char nomeMaiorIdade[250];
char nomeMenorIdade[250];	
	
	
for(i = 0; i < 5; i++){
printf("\n Digite seu nome: ");
fgets(nome[i] ,200, stdin);

printf("\n Digite sua idade: ");
scanf("%i" ,&idade[i]);

printf("\n Digite seu peso: ");
scanf("%f" ,&peso[i]);

printf("\n Digite sua altura: ");
scanf("%f" ,&altura[i]);	

fflush(stdin);


if (altura[i] > maiorAltura) {
maiorAltura = altura[i];
strcpy(nomeMaiorAltura, nome[i]);
}

if(altura[i] < menorAltura) {
menorAltura = altura[i];
strcpy(nomeMenorAltura, nome[i]);
}


if(peso[i] > maiorPeso) {
maiorPeso = peso[i];
strcpy(nomeMaiorPeso, nome[i]);
}

if (peso[i] < menorPeso) {
menorPeso = peso[i];
strcpy(nomeMenorPeso, nome[i]);
}


if (idade[i] > maiorIdade) {
maiorIdade = idade[i];
strcpy(nomeMaiorIdade, nome[i]);
}

if (idade[i] < menorIdade) {
menorIdade = idade[i];
strcpy(nomeMenorIdade, nome[i]);
}

/*

TENTEI DE TUDO, MAS INFELIZMENTE NÃO CONSEGUI RESOLVER USANDO OPERAÇÃO TERNÁRIA.

maiorAltura = maiorAltura > altura[i] ? altura[i] : maiorAltura;
strcpy(nomeMaiorAltura, nome[i]);

menorAltura = menorAltura < altura[i] ? altura[i] : menorAltura;
strcpy(nomeMenorAltura, nome[i]);

maiorPeso = maiorPeso > peso[i] ? peso[i] : maiorPeso;
strcpy(nomeMaiorPeso, nome[i]);


menorPeso = menorPeso < peso[i] ? peso[i] : menorPeso;
strcpy(nomeMenorPeso, nome[i]);
	
maiorIdade = maiorIdade > idade[i] ? idade[i] : maiorIdade;	
strcpy(nomeMaiorIdade, nome[i]);

menorIdade = menorIdade < idade[i] ? idade[i] : menorIdade;	
strcpy(nomeMenorIdade, nome[i]);
*/		
}

for(i = 0; i < 5; i++){


	
	
printf("\n Nomes: %s " ,nome[i]);
printf("\n idades: %i " ,idade[i]);
printf("\n Pesos: %.1f " ,peso[i]);
printf("\n Altura: %.2f" ,altura[i]);	


		
}

printf("\n Pessoa mais alta: %s %.2f" ,nomeMaiorAltura ,maiorAltura);
printf("\n Pessoa mais baixa: %s %.2f" ,nomeMenorAltura ,menorAltura);
printf("\n Pessoa mais pesada: %s %.1f " ,nomeMaiorPeso ,maiorPeso);
printf("\n Pessoa menos pesada: %s %.2f" ,nomeMenorPeso ,menorPeso);
printf("\n Pessoa mais velha: %s %i" ,nomeMaiorIdade ,maiorIdade);
printf("\n Pessoa com a menor idade: %s %i" ,nomeMenorIdade ,menorIdade);


return 0;	
	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int main() {
	setlocale(LC_ALL ,"portuguese");
	
int numeros[5];
int quantImpares = 0;
int quantNegativos = 0;
int maiorNumero, menorNumero;
int somaPares = 0, quantPares = 0;
float mediaInseridos, mediaPares;
int i,soma,somaInseridos;

for(i = 0; i < 5; i++) {
printf("Digite os números: ");
scanf("%d", &numeros[i]);

if(numeros[i] % 2 != 0) {
quantImpares++;
}

if(numeros[i] < 0) {
quantNegativos++;
}

if (i == 0 || numeros[i] > maiorNumero) {
maiorNumero = numeros[i];
}
if (i == 0 || numeros[i] < menorNumero) {
menorNumero = numeros[i];
}

if(numeros[i] % 2 == 0) {
somaPares += numeros[i];
quantPares++;
}
somaInseridos += numeros[i];
}

mediaInseridos = somaInseridos / i;

if(quantPares > 0) {
mediaPares = somaPares / quantPares;
} else {
mediaPares = 0;
}

printf("\n Quantidade de números ímpares: %i", quantImpares);
printf("\n Quantidade de números negativos: %d\n", quantNegativos);
printf("\n Maior número: %d\n", maiorNumero);
printf("\n Menor número: %d\n", menorNumero);
printf("\n Média de números pares: %.2f\n", mediaPares);
printf("\n Média de números inseridos: %.2f\n", mediaInseridos);

return 0;
}

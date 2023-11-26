#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	setlocale(LC_ALL ,"portuguese");
char nomes[5][200];
char numeros[5][15];
int i,opcao, numContatos = 0;

do {
printf("\nSelecione uma opção:\n");
printf("1. Adicionar um número\n");
printf("2. Mostrar números cadastrados\n");
printf("3. Encerrar o programa\n");
printf("Opção: ");
scanf("%i", &opcao);

fflush(stdin);

switch (opcao) {
	
case 1:
	
if (numContatos < 5) {
printf("\nDigite o nome: ");
fgets(nomes[numContatos], 200, stdin);

printf("Digite o número de telefone: ");
fgets(numeros[numContatos], 15, stdin);

numContatos++;
printf("Contato adicionado com sucesso!\n");
} else {
printf("Limite de contatos atingido. Não é possível adicionar mais contatos.\n");
}
break;

case 2:
printf("\nNúmeros cadastrados: %i" ,numeros[i]);
for(i = 0; i < numContatos; i++) {
printf("Nome: %sNúmero: %s\n", nomes[i], numeros[i]);
}
break;

case 3:
printf("\nEncerrando o programa.\n");
break;

default:
printf("\nOpção inválida. Tente novamente.\n");
}

} while (opcao != 3);
return 0;
}


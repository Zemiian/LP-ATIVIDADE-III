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
printf("\nSelecione uma op��o:\n");
printf("1. Adicionar um n�mero\n");
printf("2. Mostrar n�meros cadastrados\n");
printf("3. Encerrar o programa\n");
printf("Op��o: ");
scanf("%i", &opcao);

fflush(stdin);

switch (opcao) {
	
case 1:
	
if (numContatos < 5) {
printf("\nDigite o nome: ");
fgets(nomes[numContatos], 200, stdin);

printf("Digite o n�mero de telefone: ");
fgets(numeros[numContatos], 15, stdin);

numContatos++;
printf("Contato adicionado com sucesso!\n");
} else {
printf("Limite de contatos atingido. N�o � poss�vel adicionar mais contatos.\n");
}
break;

case 2:
printf("\nN�meros cadastrados: %i" ,numeros[i]);
for(i = 0; i < numContatos; i++) {
printf("Nome: %sN�mero: %s\n", nomes[i], numeros[i]);
}
break;

case 3:
printf("\nEncerrando o programa.\n");
break;

default:
printf("\nOp��o inv�lida. Tente novamente.\n");
}

} while (opcao != 3);
return 0;
}


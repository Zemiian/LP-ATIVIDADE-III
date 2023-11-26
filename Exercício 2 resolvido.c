#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nomes[5][200];
    int idades[5];
    float notas[5][3];
    float medias[5];
	int i,j,soma = 0;
	   
for(i = 0; i < 5; i++) {
printf("\nDigite o nome do aluno: ");
fgets(nomes[i], 200, stdin);

printf("Digite a idade: ");
scanf("%i", &idades[i]);

    

// Ler as três notas
for(j = 0; j < 3; j++) {
printf("Digite as notas: ");
scanf("%f", &notas[i][j]);
soma += notas[i][j];
}

// Calcular a média
        
medias[i] = soma / j;
soma = 0;
fflush(stdin);
}

for(i = 0; i < 5; i++){
printf("\nAluno: %s" ,nomes[i]);
printf("\nIdade: %i" ,idades[i]);
printf("\nMédia: %.2f" ,medias[i]);

for(j = 0; j < 5; j++){
printf("\nNotas: %.1f" ,notas[i][j]);
}


if(medias[i] >= 7.0) {
printf("\nAprovado");
} else if (medias[i] >= 5.0) {
printf("\nRecuperação");
} else {
printf("\nReprovado");
}
}

return 0;
}


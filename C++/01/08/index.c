#include <stdio.h>


int main(){
	float prova1, prova2, media;
	printf("\nDigite primeira nota: ");
	scanf("%f", &prova1);
	printf("\nDigite segunda nota: ");
	scanf("%f", &prova2);
	media = (prova1 + prova2) / 2; 
	printf ("\nMedia aritmetica: %f", media);
	if (media >= 5){
		printf("\nAluno aprovado"); 
	}else{
		printf("\nAluno Reprovado");
	}
}


#include <stdio.h>


int main(){
	float altura, peso;
    int sexo; 

	printf("\nSelecione o sexo - (1) para Homem - (2) para Mulher: ");
	scanf("%d", &sexo);

	printf("\nDigite sua altura em metros: ");

	scanf("%f", &altura);

	if (sexo == 1){
        peso = 72.7 * altura - 58;
		printf("\n Seu peso ideal é: %f", peso); 
	}else{
        peso = 62.1 * altura - 44.7;
		printf("\n Seu peso ideal é: %f", peso);
	}
}

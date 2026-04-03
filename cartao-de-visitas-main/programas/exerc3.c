#include <stdio.h>

int main() {
	
	char Operador;
	float PrimeiroNumero, SegundoNumero, Resultado;
	
		printf("Digite um numero: ");
			scanf("%f", &PrimeiroNumero);
		printf("Digite um operador: ");
			scanf(" %c", &Operador);
		printf("Digite outro numero: ");
			scanf("%f", &SegundoNumero);
			
		if (Operador == '/' && PrimeiroNumero > 0 && SegundoNumero > 0){
			
			Resultado = PrimeiroNumero / SegundoNumero;
			
			printf("Resultado: %.2f %c %.2f = %.2f", PrimeiroNumero, Operador, SegundoNumero, Resultado);		
		}
		
		else if (Operador == '*'){
			
			Resultado = PrimeiroNumero * SegundoNumero;
			
			printf("Resultado: %.2f %c %.2f = %.2f", PrimeiroNumero, Operador, SegundoNumero, Resultado);		
		}
		
		else if (Operador == '+'){
			
			Resultado = PrimeiroNumero + SegundoNumero;
			
			printf("Resultado: %.2f %c %.2f = %.2f", PrimeiroNumero, Operador, SegundoNumero, Resultado);		
		}
		
		else if (Operador == '-'){
			
			Resultado = PrimeiroNumero - SegundoNumero;
			
			printf("Resultado: %.2f %c %.2f = %.2f", PrimeiroNumero, Operador, SegundoNumero, Resultado);	
		}
		
		else if (PrimeiroNumero == 0 || SegundoNumero == 0){
			printf("Impossivel dividir por zero!");
		}
		
		else{
			printf("Operador Invalido!");
		}
		
					
	
	return 0;
}
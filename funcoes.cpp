#include <stdio.h>

// Escreva um algoritmo que solicite dois valores reais e apresente: 
// 1) A soma entre eles
// 2) A subtracao entre eles
// 3) A multiplicacao entre eles
// 4) A divisao do primeiro pelo o segundo
// 5) A exponenciacao (primeiro valor, expoente)
// 6) Calcular exponenciacao com recursividade
// 7) Calcular o fatorial do primeiro valor e termial o segundo valor 
// 8) Pesquisar sobre paraemtros com valor default na assinatura das funcoes 

//OBS: Utilizar a cahamada de funcoes e usar estrutura de repeticao no item 5


float Somar(float Num1, float Num2) {
	float Resultado;
	Resultado = Num1+Num2;
	return(Resultado); 
}
float Exponenciar(int Base, int Expoente) {
	int Resultado=1;	
	for (int i=1; i<=Expoente; i++)
		Resultado = Resultado*Base;
	return(Resultado); 
}
int Fatorar(int N) {
	int acumulador = 1;	
	for (int i=1; i<= N; i++)
		acumulador = acumulador*i;
	return(acumulador); 
}
int Termial(int N) {
	int acumulador = 0;	
	for (int i=1; i<= N; i++)
		acumulador = acumulador+i;
	return(acumulador); 
}
//assinatura da funcao pq foi implementada apos ser chamada 
float Subtrair(float Num1, float Num2);
float Multiplicar(float vlr1, float vlr2); 
int Fatorar(int N);
int Termial(int N);

int main(){
	float vlr1, vlr2;
	//solicitando ao usuario dois valores reais 
	printf("Informe o primeiro valor: ");
	scanf("%f", &vlr1);
	printf("Informe o segundo valor: ");
	scanf("%f", &vlr2);
	//Apresentcao dos resultados
	printf("\n Soma: %0.1f", Somar(vlr1, vlr2));
	printf("\n Subtracao: %0.1f", Subtrair(vlr1, vlr2));
	printf("\n Multiplicacao: %0.1f", Multiplicar(vlr1, vlr2));
	printf("\n %0.1f elevado a %0.1f: %0.1f", vlr1, vlr2, Exponenciar(vlr1, vlr2));
	printf("\n Fatoracao: %d",Fatorar(vlr1));
    printf("\n Termial: %d", Termial(vlr1));
	


}
//implementacao das funcoes
float Multiplicar(float A, float B) {
	return A*B ; 
}
float Subtrair(float A, float B) { 
	return A-B; 
}


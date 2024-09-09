#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas10, notas5, notas1;
    
    // Leitura do valor total
    printf("Digite o valor total em reais: ");
    scanf("%d", &valor);
    
    // Cálculo da quantidade de cada nota
    notas100 = valor / 100;
    valor %= 100;
    
    notas50 = valor / 50;
    valor %= 50;
    
    notas10 = valor / 10;
    valor %= 10;
    
    notas5 = valor / 5;
    valor %= 5;
    
    notas1 = valor;
    
    // Impressão das notas necessárias
    printf("Notas de 100 reais: %d\n", notas100);
    printf("Notas de 50 reais: %d\n", notas50);
   


#include <stdio.h>

int main() {
    int notas1, notas10, notas50, notas100;
    int total;
    
    // Leitura das quantidades de notas
    printf("Digite a quantidade de notas de 1 real: ");
    scanf("%d", &notas1);
    
    printf("Digite a quantidade de notas de 10 reais: ");
    scanf("%d", &notas10);
    
    printf("Digite a quantidade de notas de 50 reais: ");
    scanf("%d", &notas50);
    
    printf("Digite a quantidade de notas de 100 reais: ");
    scanf("%d", &notas100);
    
    // Cálculo do valor total
    total = notas1 * 1 + notas10 * 10 + notas50 * 50 + notas100 * 100;
    
    // Impressão do valor total
    printf("O valor total em dinheiro é: %d reais\n", total);
    
    return 0;
}
 

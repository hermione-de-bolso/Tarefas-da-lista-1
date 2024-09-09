#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    // Leitura da temperatura em Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Conversão para Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    
    // Impressão da temperatura em Celsius
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);
    
    return 0;
}


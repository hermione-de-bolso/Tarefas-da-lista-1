#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float PI = 3.14159;
    
    // Leitura do raio
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    // Cálculo da área
    area = PI * raio * raio;
    
    // Impressão da área
    printf("A área do círculo é: %.2f\n", area);
    
    return 0;
}

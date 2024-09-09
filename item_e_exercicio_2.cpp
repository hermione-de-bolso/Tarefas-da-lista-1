#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, area, litrosNecessarios, latas;
    
    // Leitura das medidas
    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo da área da parede
    area = largura * altura;
    
    // Cálculo da quantidade de tinta necessária
    litrosNecessarios = area * 0.3;  // 300 ml por metro quadrado = 0.3 litros
    latas = litrosNecessarios / 2;  // Cada lata tem 2 litros
    
    // Impressão da quantidade de latas de tinta
    printf("Você precisará de %.0f lata(s) de tinta.\n", ceil(latas));
    
    return 0;
}
 

#include <stdio.h>

int main() {
    float pressao, volume, temperatura, massa;
    
    // Leitura dos dados
    printf("Digite a pressão (em unidades de pressão): ");
    scanf("%f", &pressao);
    
    printf("Digite o volume (em unidades de volume): ");
    scanf("%f", &volume);
    
    printf("Digite a temperatura (em graus Fahrenheit): ");
    scanf("%f", &temperatura);
    
    // Conversão da temperatura para Kelvin
    temperatura = temperatura + 460;
    
    // Cálculo da massa de ar
    massa = (pressao * volume) / (0.37 * temperatura);
    
    // Impressão da massa de ar
    printf("A massa de ar do pneu é: %.2f\n", massa);
    
    return 0;
}
  

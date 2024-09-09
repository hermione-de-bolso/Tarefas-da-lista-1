#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminante, raiz1, raiz2;
    
    // Leitura dos coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    
    // Cálculo do discriminante
    discriminante = b * b - 4 * a * c;
    
    if (discriminante > 0) {
        // Duas raízes reais distintas
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        // Uma raiz real
        raiz1 = -b / (2 * a);
        printf("A raiz é: %.2f\n", raiz1);
    } else {
        // Sem raízes reais
        printf("Não há raízes reais.\n");
    }
    
    return 0;
}
 

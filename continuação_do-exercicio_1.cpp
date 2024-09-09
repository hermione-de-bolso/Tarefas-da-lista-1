#include <stdio.h>  // Correção da sintaxe do include
int main() {
    int a = 10;  // Inicialização da variável a
    printf("%d\n", a);  // Imprimir o valor de a
    return 0;
}


#include <stdio.h>  // Correção da sintaxe do include
int main() {
    printf("%d ", 4);  // Imprimir 4 com um espaço após
    printf("%d\n", 2);  // Imprimir 2 e quebrar a linha
    return 0;
}


#include <stdio.h>  // Correção da sintaxe do include
int main() {
    int a;  // Declaração da variável
    scanf("%d", &a);  // Correção: uso do operador & para passar o endereço da variável
    printf("%d", a);  // Imprimir o valor lido
    return 0;
}



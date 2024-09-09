#include <stdio.h>

int main() {
    char nome[50];
    
    // Mensagem inicial
    printf("Olá eu sou o Nº 1, como é seu nome?\n");
    
    // Leitura do nome
    scanf("%49s", nome);  // Limite de 49 caracteres para evitar overflow
    
    // Mensagem de boas-vindas
    printf("Bem-vindo ao clube %s!\n", nome);
    
    return 0;
}


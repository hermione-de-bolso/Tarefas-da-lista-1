#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;


int main()
{
    // Dados das ações
    float precoAcao1 = 24.13;
    float precoAcao2 = 11.00;
    float precoAcao3 = 38.65;
    
    float dividendosAcao1 = 17.00;
    float dividendosAcao2 = 35.00;
    float dividendosAcao3 = 25.00;
    
    // Valor total a ser investido
    float valorTotal = 1000.00;
    
    // Valor a ser investido em cada ação
    float valorPorAcao = valorTotal / 3;
    
    // Cálculo da quantidade de ações que podem ser compradas
    int quantidadeAcao1 = (int)(valorPorAcao / precoAcao1); // Convertendo para inteiro
    int quantidadeAcao2 = (int)(valorPorAcao / precoAcao2);
    int quantidadeAcao3 = (int)(valorPorAcao / precoAcao3);
    
    // Valores investidos em cada ação
    float valorInvestidoAcao1 = quantidadeAcao1 * precoAcao1;
    float valorInvestidoAcao2 = quantidadeAcao2 * precoAcao2;
    float valorInvestidoAcao3 = quantidadeAcao3 * precoAcao3;
    
    // Calculando o Dividend Yield (DY) para cada ação
    float dyAcao1 = (dividendosAcao1 / precoAcao1) * 100;
    float dyAcao2 = (dividendosAcao2 / precoAcao2) * 100;
    float dyAcao3 = (dividendosAcao3 / precoAcao3) * 100;
    
    // Exibindo os resultados
    printf("Investindo R$%.2f em cada ação:\n", valorPorAcao);
    
    printf("Ação 1:\n");
    printf("Quantidade comprada: %d\n", quantidadeAcao1);
    printf("Valor investido: R$%.2f\n", valorInvestidoAcao1);
    printf("Dividend Yield (DY): %.2f%%\n", dyAcao1);
    
    printf("\nAção 2:\n");
    printf("Quantidade comprada: %d\n", quantidadeAcao2);
    printf("Valor investido: R$%.2f\n", valorInvestidoAcao2);
    printf("Dividend Yield (DY): %.2f%%\n", dyAcao2);
    
    printf("\nAção 3:\n");
    printf("Quantidade comprada: %d\n", quantidadeAcao3);
    printf("Valor investido: R$%.2f\n", valorInvestidoAcao3);
    printf("Dividend Yield (DY): %.2f%%\n", dyAcao3);
    
    return 0;
}


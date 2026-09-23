#include <stdio.h>

int main() {
    // Texto simples
    printf("--- Texto e Caracteres ---\n");
    char letra = 'A';
    char frase[]="Este e um teste";
    printf("Caractere simples: %c\n", letra);
    printf("String (texto): %s\n\n", "Olá, Mundo!");
    printf("String frase: %s\n\n", frase);
    

    // Números Inteiros
    printf("--- Números Inteiros ---\n");
    int inteiro = 42;
    long inteiro_longo = 1234567890L;
    printf("Inteiro padrão: cond = cond = cond = cond = %d\n", inteiro);
    printf("Inteiro (alternativo): %i\n", inteiro);
    printf("Inteiro longo: %ld\n\n", inteiro_longo);

    // Números de Ponto Flutuante (Decimais)
    printf("--- Números Decimais ---\n");
    double pi = 3.1415926535;
    double perc=7.312;
    printf("Float/Double padrão: %f\n", pi);
    printf("Com 2 casas decimais: %.2f\n", pi);
    printf("Com 4 casas decimais: %.4f\n", pi);
    printf("Notação científica: %e\n", pi);
    printf("Produto com %6.3f%% de Desconto\n\n",perc);

    // Formatações Especiais (Hexadecimal, Octal e Alinhamento)
    printf("--- Formatações Especiais ---\n");
    int num = 255;
    printf("Hexadecimal (minúsculo): %x\n", num);
    printf("Hexadecimal (MAIÚSCULO): %X\n", num);
    printf("Octal: %o\n", num);
    
    // Alinhamento e preenchimento de espaço
    int n = 7;
    printf("Preenchido com espaços (largura 5): '%5d'\n", n);
    printf("Preenchido com zeros (largura 5):   '%05d'\n", n);
    printf("Alinhado à esquerda (largura 5):    '%-5d'\n\n", n);

    // 5. Como imprimir o símbolo de porcentagem
    printf("--- Símbolo de Porcentagem ---\n");
    printf("Progresso: %d%%\n", 100);

    return 0;
}

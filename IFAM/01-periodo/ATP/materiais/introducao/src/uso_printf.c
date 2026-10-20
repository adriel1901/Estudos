#include <stdio.h>

int main() {
    // Texto simples
    printf("--- Texto e Caracteres ---\n");
    char letra = 'A';
    char frase[]="Este e um teste";
    printf("Caractere simples: %c\n", letra);
    printf("String (texto): %s\n\n", "Ola, Mundo!");
    printf("String frase: %s\n\n", frase);
    

    // Numeros Inteiros
    printf("--- Numeros Inteiros ---\n");
    int inteiro = 42;
    long inteiro_longo = 1234567890L;
    printf("Inteiro padrao: cond = %d\n", inteiro);
    printf("Inteiro (alternativo): %i\n", inteiro);
    printf("Inteiro longo: %ld\n\n", inteiro_longo);

    // Numeros de Ponto Flutuante (Decimais)
    printf("--- Numeros Decimais ---\n");
    double pi = 3.1415926535;
    double perc=7.312;
    printf("Float/Double padrao: %f\n", pi);
    printf("Com 2 casas decimais: %.2f\n", pi);
    printf("Com 4 casas decimais: %.4f\n", pi);
    printf("Notacao cientifica: %e\n", pi);
    printf("Produto com %6.3f%% de Desconto\n\n",perc);

    // Formatacoes Especiais (Hexadecimal, Octal e Alinhamento)
    
    printf("--- Formatacoes Especiais ---\n");
    int num = 255;
    printf("Hexadecimal (minusculo): %x\n", num);
    printf("Hexadecimal (MAIUSCULO): %X\n", num);
    printf("Octal: %o\n", num);
    
    // Alinhamento e preenchimento de espaco
    int n = 7;
    printf("Preenchido com espacos (largura 5): '%5d'\n", n);
    printf("Preenchido com zeros (largura 5):   '%05d'\n", n);
    printf("Alinhado a esquerda (largura 5):    '%-5d'\n\n", n);

    // 5. Como imprimir o simbolo de porcentagem
    printf("--- Simbolo de Porcentagem ---\n");
    printf("Progresso: %d%%\n", 100);

    return 0;
}

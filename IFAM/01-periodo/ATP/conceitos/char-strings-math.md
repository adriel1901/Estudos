# Manipulação de Caracteres, Strings e Funções Matemáticas em C

## Conceito

Em linguagem C:
- Um **caractere** (`char`) é um tipo inteiro de 8 bits que representa símbolos conforme a codificação ASCII. A biblioteca `<ctype.h>` fornece primitivas padronizadas para classificação e transformação de caracteres individuais.
- Uma **string** (*cadeia de caracteres*) não é um tipo primitivo, mas sim um vetor unidimensional de caracteres terminado obrigatoriamente pelo caractere nulo `\0` (código ASCII 0). A biblioteca `<string.h>` oferece rotinas para cópia, concatenação, comparação e medição de tamanho.
- Para transformações numéricas e computação científica, `<stdlib.h>` provê conversão entre texto e tipos numéricos (`atoi`, `atof`), além de números pseudoaleatórios (`rand`, `srand`). A biblioteca `<math.h>` fornece funções analíticas, trigonométricas e transcendentais em ponto flutuante.

---

## Intuição

- **Caractere vs. String**: Um caractere é uma única letra ou símbolo delimitado por aspas simples (ex.: `'A'`). Uma string é uma sequência delimitada por aspas duplas (ex.: `"IFAM"`).
- **O Terminador Nulo (`\0`)**: Funciona como o "ponto final" de um texto na memória. O computador não sabe antecipadamente onde a string termina a menos que encontre o byte `0`. Portanto, um vetor de $N$ caracteres pode conter no máximo uma string de tamanho $N - 1$.
- **Imutabilidade de Atribuição Direta**: Em C, não é possível reatribuir strings diretamente com `=` após a declaração (ex.: `str = "novo"` é inválido para vetores de char). Deve-se usar funções de cópia como `strcpy` ou manipulação por ponteiros.

---

## Definições importantes

### 1. Biblioteca `<ctype.h>` (Classificação e Conversão de Caracteres)
Opera sobre caracteres individuais (`int c`):

| Função | Descrição / Teste |
| :--- | :--- |
| `toupper(c)` | Converte caractere para maiúsculo |
| `tolower(c)` | Converte caractere para minúsculo |
| `isalnum(c)` | Retorna não-zero se for alfanumérico (letra ou dígito) |
| `isalpha(c)` | Retorna não-zero se for letra alfabética ($a-z, A-Z$) |
| `isdigit(c)` | Retorna não-zero se for dígito decimal ($0-9$) |
| `isxdigit(c)`| Retorna não-zero se for dígito hexadecimal ($0-9, a-f, A-F$) |
| `islower(c)` | Retorna não-zero se for letra minúscula |
| `isupper(c)` | Retorna não-zero se for letra maiúscula |
| `isspace(c)` | Retorna não-zero se for espaço, tabulação (`\t`), quebra (`\n`) |
| `ispunct(c)` | Retorna não-zero se for caractere de pontuação |
| `isprint(c)` | Retorna não-zero se for caractere imprimível (inclui espaço) |
| `isgraph(c)` | Retorna não-zero se for caractere imprimível (exceto espaço) |
| `iscntrl(c)` | Retorna não-zero se for caractere de controle ASCII ($0-31$ ou $127$) |
| `isascii(c)` | Retorna não-zero se pertencer à tabela ASCII padrão ($0-127$) |

### 2. Biblioteca `<string.h>` (Manipulação de Cadeias)
| Função | Assinatura resumida | Descrição |
| :--- | :--- | :--- |
| `strlen` | `size_t strlen(const char *s)` | Retorna o comprimento da string (não conta o `\0`) |
| `strcpy` | `char *strcpy(char *dest, const char *src)` | Copia o conteúdo de `src` para `dest` (incluindo `\0`) |
| `strcat` | `char *strcat(char *dest, const char *src)` | Concatena `src` ao fim de `dest` |
| `strcmp` | `int strcmp(const char *s1, const char *s2)` | Compara lexicograficamente: `0` (iguais), `<0` ($s_1 < s_2$), `>0` ($s_1 > s_2$) |
| `strcmpi` / `strcasecmp` | `int strcasecmp(const char *s1, const char *s2)` | Compara strings ignorando diferenças entre maiúsculas e minúsculas |
| `strupr` / `strlwr` | *(Extensões não-ANSI / compiladores específicos)* | Converte toda a string in-place para maiúsculas/minúsculas |
| `strrev` | *(Extensão)* | Inverte os caracteres da string |

### 3. Biblioteca `<stdlib.h>` (Conversão e Geração Aleatória)
- **Conversão de Texto para Número**:
  - `atoi(str)`: converte prefixo numérico para `int`. Retorna $0$ se inválido.
  - `atof(str)`: converte prefixo numérico decimal/científico para `double`.
  - `itoa(val, str, base)`: converte `int` para string em uma base (comum em GCC/Windows; alternativa padrão ANSI: `sprintf(str, "%d", val)`).
- **Geração Pseudoaleatória**:
  - `rand()`: devolve pseudoaleatório entre $0$ e `RAND_MAX`.
  - `srand(semente)`: define o ponto de partida do gerador.
  - Uso padrão temporal: `srand(time(NULL));` com inclusão de `<time.h>`.
  - Limitação para faixa $[0, N-1]$: `int sorteado = rand() % N;`.

### 4. Biblioteca `<math.h>` (Computação Matemática)
> [!NOTE]
> Ao compilar código no Linux usando `<math.h>`, é necessário passar a flag de ligação `-lm` para o compilador (ex.: `gcc programa.c -o programa -lm`).

- **Módulos / Absoluto**:
  - `abs(int)`: valor absoluto de inteiros (`<stdlib.h>`).
  - `fabs(double)`: valor absoluto em ponto flutuante (`<math.h>`).
- **Exponencial e Raiz**:
  - `pow(base, exp)`: calcula $\text{base}^{\text{exp}}$.
  - `exp(x)`: calcula $e^x$ (base neperiana $e \approx 2.71828$).
  - `sqrt(x)`: calcula a raiz quadrada $\sqrt{x}$.
- **Logaritmos**:
  - `log(x)`: logaritmo natural $\ln(x)$.
  - `log10(x)`: logaritmo na base 10 $\log_{10}(x)$.
  - Mudança de base (ex.: base 2): $\log_2(x) = \frac{\ln(x)}{\ln(2)}$.
- **Trigonometria**:
  - `sin(rad)`, `cos(rad)`, `tan(rad)`: recebem ângulos em radianos.
  - Conversão graus $\leftrightarrow$ radianos:
    $$\text{rad} = \text{graus} \times \frac{\pi}{180}, \quad \text{graus} = \text{rad} \times \frac{180}{\pi}$$
  - Inversas: `asin(x)`, `acos(x)`, `atan(x)`.
  - Hiperbólicas: `sinh(x)`, `cosh(x)`, `tanh(x)`.
- **Arredondamentos**:
  - `round(x)`: arredonda para o inteiro mais próximo.
  - `ceil(x)`: arredonda para cima (menor inteiro $\ge x$).
  - `floor(x)`: arredonda para baixo (maior inteiro $\le x$).

---

## Exemplos

### Exemplo 1: Conversão de Frase com `ctype.h`
```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    if (fgets(frase, sizeof(frase), stdin) != NULL) {
        for (int i = 0; frase[i] != '\0'; i++) {
            frase[i] = toupper((unsigned char)frase[i]);
        }
        printf("Frase em maiusculas: %s", frase);
    }

    return 0;
}
```

### Exemplo 2: Concatenação, Tamanho e Comparação (`string.h`)
```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50] = "Ciencia";
    char sobrenome[50] = " da Computacao";

    printf("Tamanho inicial de nome: %zu\n", strlen(nome));
    strcat(nome, sobrenome);
    printf("Nome completo: %s (comprimento: %zu)\n", nome, strlen(nome));

    if (strcmp("IFAM", "IFAM") == 0) {
        printf("Strings identicas.\n");
    }

    return 0;
}
```

### Exemplo 3: Cálculos com `<math.h>`
```c
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double angulo_graus = 45.0;
    double rad = angulo_graus * (PI / 180.0);

    printf("Seno de 45 graus: %.4f\n", sin(rad));
    printf("Cosseno de 45 graus: %.4f\n", cos(rad));
    printf("Tangente de 45 graus: %.4f\n", tan(rad));
    printf("Raiz quadrada de 2: %.4f\n", sqrt(2.0));
    printf("2 elevado a 8: %.2f\n", pow(2.0, 8.0));

    return 0;
}
```

---

## Aplicação

- **Tratamento e Sanitização de Entrada**: Validação de formulários, CPFs, e-mails, conversão de comandos em maiúsculas/minúsculas.
- **Processamento de Linguagem Natural e Compiladores**: Análise léxica de identificadores (`isalpha`, `isalnum`), remoção de espaços em branco (`isspace`).
- **Simulação e Modelagem Matemática**: Resolução de equações físicas, computação gráfica com trigonometria, estatística com distribuições pseudoaleatórias.

---

## Erros comuns

- **Esquecer o byte extra para o `\0`**: Declarar `char nome[5]` e tentar armazenar `"Texto"` (são 5 letras + 1 byte nulo, necessitando de no mínimo 6 posições).
- **Usar operador `=` para cópia de string**: Escrever `str1 = str2;` faz apenas tentativa de atribuição de ponteiro constante, gerando erro de compilação. Use `strcpy(dest, src)`.
- **Não incluir a flag `-lm` na compilação**: O compilador GCC/Clang emitirá erro de `undefined reference to sin` ou `sqrt` se esquecer `-lm`.
- **Passar graus diretamente para `sin`/`cos`**: As funções trigonométricas de `<math.h>` exigem radianos.
- **Buffer overflow com `gets`**: A função `gets` é insegura e foi descontinuada na norma C11. Prefira sempre `fgets(buffer, sizeof(buffer), stdin)`.
- **Não usar `unsigned char` com `<ctype.h>`**: Passar valores negativos (como caracteres acentuados estendidos) para funções como `toupper` pode causar comportamento indefinido.

---

## Dúvidas

- [ ] Como lidar de forma segura com strings Unicode/UTF-8 em C sem truncar caracteres acentuados de múltiplos bytes?
- [ ] Qual a diferença de portabilidade entre `itoa` e `snprintf(str, sizeof(str), "%d", num)` no padrão ISO C?

---

## Exercícios relacionados

- [Exercício: Texto todo em minúsculo e Primeira Letra em Maiúscula](../atividades/atividades-char-strings-math.md#exercício-1--conversão-de-frase-para-minúsculo)
- [Exercício: Concatenação, Tamanho e Comparação de Strings](../atividades/atividades-char-strings-math.md#exercício-3--leitura-comprimento-e-concatenação-de-palavras)
- [Exercício: Conversão de Texto para Números e Cálculos](../atividades/atividades-char-strings-math.md#exercício-5--conversão-de-strings-para-inteiros-e-ponto-flutuante)
- [Exercício: Funções Trigonométricas e Arredondamento](../atividades/atividades-char-strings-math.md#exercício-6--cálculos-matemáticos-com-mathh-e-stdlibh)

---

## Revisão rápida

1. Strings em C são vetores de `char` terminados com `\0`.
2. Para classificar caracteres use `<ctype.h>` (`isalnum`, `isalpha`, `isdigit`, `isspace`).
3. Para manipular cadeias use `<string.h>` (`strlen`, `strcpy`, `strcat`, `strcmp`).
4. Funções em `<math.h>` operam em ponto flutuante e exigem `-lm` no GCC.
5. Ângulos trigonométricos devem ser convertidos para radianos antes de chamar `sin()`, `cos()` e `tan()`.

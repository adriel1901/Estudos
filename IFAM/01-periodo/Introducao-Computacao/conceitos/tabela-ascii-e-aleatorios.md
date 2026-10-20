# Representação de Caracteres (ASCII) e Geração Aleatória em C

## Conceito

Em computação de baixo nível e na linguagem C:
1. **Caracteres são inteiros pequenos**: Cada tipo `char` (geralmente 1 byte) armazena um número inteiro que mapeia para um símbolo na tabela ASCII.
2. **Geração pseudoaleatória**: A biblioteca padrão (`stdlib.h` e `time.h`) permite gerar sequências de números pseudoaleatórios com `rand()`, inicializados por uma semente com `srand(time(NULL))`.

---

## Intuição

- **ASCII**: Quando você escreve `'A'`, para a CPU isso é simplesmente o número `65`. Ao somar `1` a `'A'`, você obtém `66`, que corresponde a `'B'`.
- **Aleatoriedade**: O computador não gera aleatoriedade verdadeira; ele executa uma fórmula matemática a partir de uma "semente" (*seed*). Usar o relógio do sistema (`time(NULL)`) garante que a sequência seja diferente a cada execução.

---

## Definições importantes

### Mapeamento ASCII de Letras Maiúsculas
- `'A'` = decimal $65$
- `'Z'` = decimal $90$
- Intervalo: $65 + (x \pmod{26})$ sorteia uma letra maiúscula no alfabeto inglês ($A$ a $Z$).

### Funções da Biblioteca Padrão
```c
#include <stdlib.h>
#include <time.h>

srand(time(NULL)); // Inicializa o gerador com o timestamp atual
int r = rand();    // Gera um inteiro pseudoaleatório entre 0 e RAND_MAX
```

---

## Exemplos

### Exemplo: Jogo de Adivinhação de Letra por Código Decimal
Baseado na prática de laboratório (`sorteado.c`):

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char escolhido;
    int chances = 0;

    srand(time(NULL));
    char sorteado = 65 + (rand() % 26);

    printf("Descubra a letra do código decimal de %d ? ", sorteado);

    while (chances < 3) {
        scanf(" %c", &escolhido);
        if (sorteado == escolhido)
        {
            printf("\nAcertou!\n");
            break;
        }
        else
        {
            printf("\nErrou! Tente novamente\n");
            chances++;
        }
    }

    return 0;
}
```

- **Objetivo**: O computador sorteia uma letra maiúscula, exibe o código decimal ASCII para o usuário e dá até 3 chances para o jogador digitar a letra correspondente.
- **Entrada**: Caracteres digitados pelo usuário no console.
- **Saída**: Feedback imediato ("Acertou!" ou "Errou! Tente novamente").
- **Conceitos utilizados**: `rand()`, `srand()`, manipulação de `char` com aritmética inteira, laço `while`.

---

## Erros comuns

1. **Esquecer o espaço antes de `%c` no `scanf`**:
   `scanf("%c", &var)` lê o `\n` (Enter) deixado no buffer pela leitura anterior. O correto para ignorar espaços e quebras de linha é `scanf(" %c", &var)`.
2. **Esquecer de chamar `srand`**:
   Sem `srand()`, `rand()` sempre produzirá exatamente a mesma sequência de números a cada execução do programa.
3. **Chamar `srand` dentro de loops**:
   `srand` deve ser chamado apenas **uma única vez** no início do programa.

---

## Dúvidas

- [ ] Como funciona a distribuição de uniformidade do operador `%` sobre `rand()`.

---

## Exercícios relacionados

- [Sorteado](../exercicios/aula-2/src/sorteado.c)
- [Alfabeto](../exercicios/aula-2/src/alfabeto.c)

---

## Revisão rápida

- `'A'` equivale a $65$ em decimal.
- Intervalo do alfabeto maiúsculo: $[65, 90]$.
- Inicialização de semente: `srand(time(NULL));`.
- Caracteres aceitam operações aritméticas convencionais.

# Vetores (Arrays Unidimensionais) em C

## Conceito

Um **vetor** (*array* unidimensional) é uma estrutura de dados homogênea e de tamanho fixo que armazena uma sequência de elementos do mesmo tipo em posições contíguas de memória.

---

## Intuição

Imagine uma fileira numerada de gavetas idênticas. Todas guardam o mesmo tipo de objeto (por exemplo, inteiros ou números reais). Para acessar qualquer gaveta específica, você precisa apenas do número da sua posição (o índice).

Em C, as gavetas são numeradas a partir do zero: se o vetor tem tamanho $N$, os índices válidos vão de $0$ até $N - 1$.

---

## Definições importantes

### 1. Declaração
```c
tipo nome_do_vetor[tamanho];
```
Exemplo:
```c
int notas[10];     // Aloca espaço para 10 inteiros
float salarios[5]; // Aloca espaço para 5 números em ponto flutuante
```

### 2. Indexação e Acesso
O acesso a um elemento é feito pelo operador colchetes `[índice]`:
- Primeiro elemento: `notas[0]`
- Último elemento: `notas[tamanho - 1]`
- Complexidade de acesso por índice: $\mathcal{O}(1)$ (tempo constante direto na memória).

### 3. Inicialização
```c
int v[5] = {1, 2, 3, 4, 5};
int zeros[10] = {0}; // Inicializa todos com 0
```

---

## Exemplos

### Exemplo 1: Leitura e Impressão de Vetor
Baseado na prática de sala (`exemplo1_vetor.c`):

```c
#include <stdio.h>

int main() {
  float notas[10];
  int i;

  for (i = 0; i < 10; i++) {
    printf("Digite o numero: %d\n", i + 1);
    scanf("%f", &notas[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("vetor %d : %.2f\n", i + 1, notas[i]);
  }

  return 0;
}
```

- **Objetivo**: Ler 10 notas do usuário e imprimir na tela com o índice ajustado para visualização humana (`i + 1`).
- **Entrada**: 10 valores em ponto flutuante via console.
- **Saída**: Listagem formatada dos valores armazenados.
- **Algoritmo**: Loop `for` de $0$ a $9$ para preenchimento sequencial, seguido por loop `for` de saída.
- **Complexidade**: $\mathcal{O}(N)$ de tempo para leitura e escrita, onde $N = 10$.

### Exemplo 2: Concatenação de Vetores
Baseado na prática de sala (`exemplo6_vetor.c`):

```c
#include <stdio.h>

int main() {
  int v1[4], v2[4], v3[8];

  for (int i = 0; i < 4; i++) {
    scanf("%d", &v1[i]);
    scanf("%d", &v2[i]);
  }

  // Copia v1 para a primeira metade de v3 e v2 para a segunda metade
  for (int i = 0; i < 4; i++) {
    v3[i] = v1[i];
    v3[i + 4] = v2[i];
  }

  printf("\nElementos do vetor concatenado:\n");
  for (int i = 0; i < 8; i++) {
    printf("%d\n", v3[i]);
  }

  return 0;
}
```

- **Objetivo**: Unir dois vetores de 4 posições em um terceiro vetor de 8 posições.
- **Entrada**: 8 inteiros (4 para `v1` e 4 para `v2`).
- **Saída**: Vetor resultante `v3` com os 8 valores combinados.
- **Conceitos utilizados**: Aritmética de deslocamento de índices (`i + 4`).

---

## Aplicação

- Armazenamento temporário de lotes de dados recebidos antes do processamento.
- Implementação de algoritmos de busca (linear e binária).
- Algoritmos de ordenação (*Bubble Sort*, *Insertion Sort*, etc.).
- Base para tabelas de frequência e histogramas.

---

## Erros comuns

1. **Acesso fora dos limites (*Buffer Overflow* / *Out-of-bounds*)**:
   ```c
   int v[5];
   v[5] = 10; // ERRO: índices válidos são 0, 1, 2, 3, 4!
   ```
   Em C não há verificação em tempo de execução para limites de array. Esse acesso sobrescreve memória adjacente, causando comportamento indefinido (*undefined behavior*).
2. **Utilizar variáveis sem inicializar**:
   Variáveis locais em C contêm lixo de memória se não forem inicializadas antes da leitura.
3. **Confundir tamanho do vetor com o último índice**:
   Um vetor declarado com `int v[N]` tem último índice `N - 1`.

---

## Dúvidas

- [ ] Como passar vetores como parâmetro de função preservando a integridade da memória.

---

## Exercícios relacionados

- [Exemplo 1: Leitura e Escrita](../exercicios/aula-2-vetores/src/exemplo1_vetor.c)
- [Exemplo 3: Busca](../exercicios/aula-2-vetores/src/exemplo3_vetor.c)
- [Exemplo 4: Manipulação de Dados](../exercicios/aula-2-vetores/src/exemplo4_vetor.c)
- [Exemplo 5: Iteração](../exercicios/aula-2-vetores/src/exemplo5_vetor.c)
- [Exemplo 6: Concatenação](../exercicios/aula-2-vetores/src/exemplo6_vetor.c)

---

## Revisão rápida

- **Declaração**: `tipo nome[TAM];`
- **Índices**: De `0` a `TAM - 1`.
- **Acesso direto**: `nome[i]` tem custo $\mathcal{O}(1)$.
- **Memória**: Sequencial e contígua.

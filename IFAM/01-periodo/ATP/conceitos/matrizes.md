# Matrizes Multidimensionais em C

## Conceito

Uma **matriz** (*array* multidimensional) é uma estrutura de dados homogênea e de tamanho fixo que armazena elementos de um mesmo tipo de dado dispostos em duas ou mais dimensões (linhas, colunas, profundidade etc.). Na memória física do computador, os elementos de uma matriz são alocados em um bloco sequencial e contíguo, organizados linha por linha (*row-major order* na linguagem C).

---

## Intuição

Se um vetor unidimensional equivale a uma régua ou uma fila numerada de gavetas, uma **matriz bidimensional** equivale a uma planilha, um tabuleiro de xadrez ou uma malha com ruas e avenidas:
- O primeiro índice indica a **linha** (posição vertical).
- O segundo índice indica a **coluna** (posição horizontal).

Para matrizes tridimensionais (3D), podemos visualizar como um prédio ou estante com andares/prateleiras: cada andar contém uma malha de linhas e colunas (ex.: `estante[andar][prateleira][gaveta]`).

Em C, a indexação de todas as dimensões sempre inicia em zero ($0$). Para uma matriz de dimensões $N \times M$, as linhas variam de $0$ até $N-1$ e as colunas variam de $0$ até $M-1$.

---

## Definições importantes

### 1. Declaração
A sintaxe em C para declaração de matrizes é:
```c
tipo nome_da_matriz[dimensao_1][dimensao_2]...[dimensao_n];
```

Exemplos:
```c
int matriz[3][3];         // Matriz bidimensional 3x3 (total: 9 inteiros)
float tabela[5][10];      // 5 linhas e 10 colunas (total: 50 floats)
int cubo[3][3][3];        // Matriz tridimensional (total: 27 inteiros)
```

### 2. Número de Elementos e Dimensões
- O número de dimensões equivale à quantidade de pares de colchetes `[]`.
- A quantidade total de posições ocupadas é o produto das dimensões:
  $$\text{Total de elementos} = D_1 \times D_2 \times \dots \times D_n$$

### 3. Alocação Estática e Contiguidade
Matrizes e vetores são estruturas de dados estáticas: seu tamanho é pré-determinado em tempo de compilação e não pode ser redimensionado em tempo de execução. O compilador aloca espaço contíguo de tamanho:
$$\text{Bytes} = (\text{Total de elementos}) \times \text{sizeof(tipo)}$$

### 4. Inicialização
Podemos inicializar matrizes diretamente na declaração:
```c
// Inicialização explícita por linhas
float matriz[2][3] = {
    {1.0, 2.0, 3.0},
    {4.0, 5.0, 6.0}
};

// Inicialização com zeros
int matriz_nula[5][5] = {0};
```

### 5. Indexação e Laços Aninhados
O percurso padrão em matrizes bidimensionais é feito com dois laços `for` aninhados:
- **Percurso Linha a Linha (Padrão e Eficiente na Cache)**:
  ```c
  for (int i = 0; i < LINHAS; i++) {
      for (int j = 0; j < COLUNAS; j++) {
          // Processa matriz[i][j]
      }
  }
  ```
- **Percurso Coluna a Coluna**:
  ```c
  for (int j = 0; j < COLUNAS; j++) {
      for (int i = 0; i < LINHAS; i++) {
          // Processa matriz[i][j]
      }
  }
  ```

### 6. Diagonais em Matrizes Quadradas ($N \times N$)
- **Diagonal Principal**: elementos onde $i = j$ (`matriz[i][i]`).
- **Diagonal Secundária**: elementos onde $j = (N - 1) - i$ (`matriz[i][N - 1 - i]`).
- **Abaixo da Diagonal Principal**: posições onde linha é maior que coluna ($i > j$).
- **Acima da Diagonal Principal**: posições onde linha é menor que coluna ($i < j$).

---

## Exemplos

### Exemplo 1: Leitura e Escrita de Matriz Bidimensional
```c
#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int mat[LINHAS][COLUNAS];

    // Leitura interativa da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Exibição em formato tabular
    printf("\nMatriz preenchida:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
- **Objetivo**: Demonstrar leitura linha a linha e visualização formatada em tabela.
- **Entrada**: 9 valores inteiros.
- **Saída**: Grade $3 \times 3$ com tabulações (`\t`).
- **Complexidade**: $\mathcal{O}(L \times C)$ para leitura e exibição.

### Exemplo 2: Operações com Diagonais e Redução de Linha/Coluna
```c
#include <stdio.h>

#define N 5

int main() {
    int m[N][N] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {5, 6, 7, 8, 9}
    };

    int somaDiag = 0, somaSec = 0, somaAbaixo = 0;
    int somaLinha[N] = {0}, somaColuna[N] = {0};

    // Diagonais e somas de vetores agregadores
    for (int i = 0; i < N; i++) {
        somaDiag += m[i][i];
        somaSec += m[i][(N - 1) - i];

        for (int j = 0; j < N; j++) {
            somaLinha[i] += m[i][j];
            somaColuna[j] += m[i][j];
            if (i > j) {
                somaAbaixo += m[i][j];
            }
        }
    }

    printf("Soma Diagonal Principal: %d\n", somaDiag);
    printf("Soma Diagonal Secundaria: %d\n", somaSec);
    printf("Soma Abaixo da Diagonal Principal: %d\n", somaAbaixo);

    return 0;
}
```

---

## Aplicação

- **Álgebra Linear e Geometria Computacional**: Transformações geométricas 2D/3D (rotação, translação, escala), sistemas de equações lineares.
- **Processamento de Imagens**: Imagens em escala de cinza são representadas como matrizes 2D de pixels; imagens coloridas (RGB) como matrizes 3D `[linhas][colunas][canais]`.
- **Grafos e Redes**: Matrizes de adjacência e matrizes de distâncias entre nós/cidades (grafos ponderados).
- **Jogos de Tabuleiro**: Xadrez ($8 \times 8$), Jogo da Velha ($3 \times 3$), Batalha Naval.

---

## Erros comuns

- **Inversão de índices de linhas e colunas**: Confundir `matriz[coluna][linha]` em vez de `matriz[linha][coluna]`.
- **Acesso fora dos limites (*Buffer Overflow*)**: Usar laços de $0$ até $N$ com `<=` (`for (i = 0; i <= N; i++)`), invadindo memória vizinha.
- **Não inicializar acumuladores**: Esquecer de zerar variáveis que acumulam somas (`soma = 0`) ou vetores agregadores antes dos laços.
- **Declaração incorreta com vírgula em vez de colchetes**: Escrever `int mat[3, 3];` (inválido em C) em vez de `int mat[3][3];`.
- **Passagem incorreta para funções**: Ao passar matriz bidimensional como argumento de função, omitir a segunda dimensão no protótipo (em C é obrigatório especificar todas as dimensões após a primeira: `void func(int mat[][COLUNAS])`).

---

## Dúvidas

- [ ] Como a ordem de percurso (linha a linha vs. coluna a coluna) afeta a eficiência do *cache* L1/L2 do processador em matrizes grandes?
- [ ] Como declarar e liberar matrizes dinamicamente com ponteiros para ponteiros (`int **`) em tempo de execução?

---

## Exercícios relacionados

- [Exercício 1: Interpretação e Teste de Mesa de Índices de Matrizes](../atividades/atividades-matrizes.md#exercício-1--interpretação-de-índices-e-teste-de-mesa)
- [Exercício 2: Soma de Matrizes e Conversão Vetor-Matriz](../atividades/atividades-matrizes.md#exercício-2--soma-de-matrizes-e-transformação-de-vetores)
- [Exercício 3: Diagonais e Reduções em Matriz 5x5](../atividades/atividades-matrizes.md#exercício-3--operações-em-matriz-quadrada-5x5)
- [Exercício 4: Médias Bimestrais com Matriz de Strings e Notas](../atividades/atividades-matrizes.md#exercício-4--leitura-de-nomes-notas-e-médias-de-alunos)
- [Exercício 5: Contagem de Peças em Tabuleiro de Xadrez](../atividades/atividades-matrizes.md#exercício-5--contagem-de-peças-em-tabuleiro-de-xadrez)
- [Exercício 6 e 7: Grafo e Tabela de Distâncias entre Cidades](../atividades/atividades-matrizes.md#exercício-6--consulta-de-distâncias-entre-cidades)

---

## Revisão rápida

1. Uma matriz $N \times M$ possui $N$ linhas ($0 \le i \le N-1$) e $M$ colunas ($0 \le j \le M-1$).
2. O total de elementos armazenados é $N \times M$, alocados de forma sequencial na memória.
3. Elementos da diagonal principal cumprem $i = j$; na secundária cumprem $j = (N - 1) - i$.
4. Elementos estritamente abaixo da diagonal principal cumprem $i > j$.
5. A forma idiomática e limpa de definir dimensões é utilizar diretivas de pré-processador (`#define LINHAS 5`).

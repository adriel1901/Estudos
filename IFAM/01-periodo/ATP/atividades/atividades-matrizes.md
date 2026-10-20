# Atividades Práticas: Matrizes Multidimensionais

Este arquivo consolida todas as questões e exercícios propostos no material de **Matrizes Multidimensionais** (Aula 09/10 de Algoritmos e Técnicas de Programação).

---

## Exercício 1 — Interpretação de Índices e Teste de Mesa

Dada a matriz bidimensional de inteiros $M$ de dimensões $6 \times 4$:

| Linha \ Coluna | 0 | 1 | 2 | 3 |
| :---: | :---: | :---: | :---: | :---: |
| **0** | 1 | 2 | 3 | 4 |
| **1** | 5 | -5 | 3 | 0 |
| **2** | 1 | 1 | 1 | 1 |
| **3** | -3 | 2 | 0 | 0 |
| **4** | 0 | 0 | 1 | 1 |
| **5** | -1 | -1 | -2 | -2 |

Determine o valor armazenado em cada uma das seguintes expressões de acesso:

1. `M[3][0]`
2. `M[4][2]`
3. `M[1][3]`
4. `M[5][M[0][2]]`
5. `M[M[3][1]][1]`
6. `M[4][(M[1][2] + M[3][0])]`

---

### Teste de Mesa em Portugol

Faça o teste de mesa e determine o estado final das matrizes `m1` e `n1`:

```text
m1 = matriz[1:3, 1:4] de inteiro
n1 = matriz[1:2, 1:2] de caractere
L, C: inteiro

C <- 2;
para L de 1 até 3 passo 1 faça
    m1[L, C] <- 2
    m1[L, C+2] <- 2
    m1[L, C-1] <- 1
    m1[L, C+1] <- 1
fimPara

para L de 1 até 2 passo 1 faça
    para C de 1 até 2 passo 1 faça
        se (L = C) então
            n1[L, C] <- "A"
        senão
            n1[L, C] <- "Z"
        fimSe
    fimPara
fimPara
```

---

## Exercício 2 — Soma de Matrizes e Transformação de Vetores

### Item A: Soma de Matrizes $5 \times 3$
Faça um programa que leia duas matrizes $A$ e $B$, cada uma de duas dimensões com cinco linhas e três colunas ($5 \times 3$) para valores inteiros.
Construir uma matriz $C$ de mesma dimensão, onde cada elemento seja formado pela soma dos elementos correspondentes:
$$C[i][j] = A[i][j] + B[i][j]$$
Ao final, apresente todos os elementos da matriz $C$.

> **Desafio**: Imprima a saída no formato visual de grade bidimensional com linhas e colunas alinhadas.

### Item B: Construção de Matriz a partir de Vetores
Elabore um programa que leia dois vetores $A$ e $B$, cada um com 7 elementos inteiros.
Construir uma matriz $C$ de duas dimensões ($7 \times 2$), cuja primeira coluna seja formada pelos elementos do vetor $A$ e a segunda coluna pelos elementos do vetor $B$:
- Coluna 0: elementos de $A$
- Coluna 1: elementos de $B$

Em seguida, imprima a matriz $C$ resultante.

---

## Exercício 3 — Operações em Matriz Quadrada $5 \times 5$

Faça um programa que crie e preencha uma matriz $5 \times 5$ com números inteiros e execute as seguintes operações:

1. **Diagonal Principal**: calcular e imprimir a soma de todos os elementos na diagonal principal ($i = j$).
2. **Diagonal Secundária**: calcular e imprimir a soma dos elementos na diagonal secundária ($j = 4 - i$).
3. **Abaixo da Diagonal Principal**: calcular e imprimir a soma de todos os elementos localizados estritamente abaixo da diagonal principal ($i > j$).
4. **Vetor Soma das Linhas**: criar e preencher o vetor `somaLinha[5]`, onde a posição $i$ armazena a soma de todos os elementos da linha $i$ da matriz.
5. **Vetor Soma das Colunas**: criar e preencher o vetor `somaColuna[5]`, onde a posição $j$ armazena a soma de todos os elementos da coluna $j$ da matriz.
6. **Busca e Ocorrência**: efetuar a leitura de um número inteiro fornecido pelo usuário e imprimir quantas vezes esse valor ocorre dentro da matriz.

---

## Exercício 4 — Leitura de Nomes, Notas e Médias de Alunos

Desenvolva um programa que leia os nomes de 8 alunos e suas duas notas bimestrais:
- Utilize uma matriz de caracteres (ou vetor de strings) para armazenar os 8 nomes.
- Armazene as notas em uma matriz $8 \times 2$ de ponto flutuante.
- Calcule a média aritmética individual de cada aluno.
- Ao final, imprima em formato tabular o nome de cada aluno, suas duas notas e a média individual.
- Na última linha da listagem, calcule e imprima a média geral da turma.

Exemplo de saída esperada:
```text
Nome            Nota 1    Nota 2    Media
Joao             6.00      7.00      6.50
Carlos           7.00      5.00      6.00
Maria            8.00      7.00      7.50
...
Media da turma = 7.45
```

---

## Exercício 5 — Contagem de Peças em Tabuleiro de Xadrez

Dado um tabuleiro de xadrez representado por uma matriz `TAB[8][8]`, considere a seguinte codificação para as peças:
- `0`: Ausência de peça (casa vazia)
- `1`: Peões
- `2`: Cavalos
- `3`: Torres
- `4`: Bispos
- `5`: Reis
- `6`: Rainhas

Faça um programa que percorra a matriz do tabuleiro e conte a quantidade total existente de cada tipo de peça.

Exemplo de saída esperada:
```text
Peões com 17 peças
Cavalos com 6 peças
Torres com 4 peças
Bispos com 3 peças
Reis com 2 peças
Rainhas com 2 peças
```

---

## Exercício 6 — Consulta de Distâncias entre Cidades

Considere a matriz de distâncias rodoviárias (em km) entre 7 capitais brasileiras:

| Código | Cidade | 0 (BEL) | 1 (FOR) | 2 (MAO) | 3 (PVH) | 4 (RIO) | 5 (SSA) | 6 (SAO) |
| :---: | :--- | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **0** | Belém | 0 | 1611 | 5298 | 4397 | 3250 | 2100 | 2933 |
| **1** | Fortaleza | 1611 | 0 | 5763 | 4865 | 2805 | 1389 | 3127 |
| **2** | Manaus | 5298 | 5763 | 0 | 901 | 4374 | 5009 | 3971 |
| **3** | Porto Velho | 4397 | 4865 | 901 | 0 | 3473 | 4023 | 3070 |
| **4** | Rio de Janeiro | 3250 | 2805 | 4374 | 3473 | 0 | 1649 | 429 |
| **5** | Salvador | 2100 | 1389 | 5009 | 4023 | 1649 | 0 | 1962 |
| **6** | São Paulo | 2933 | 3127 | 3971 | 3070 | 429 | 1962 | 0 |

Construa um algoritmo/programa que armazene a tabela de distâncias em uma matriz $7 \times 7$ e os nomes em um vetor de strings.
Em um laço interativo, solicite a cidade de origem e a cidade de destino (pelos seus códigos numéricos de 0 a 6) e informe a distância entre elas. O programa deve encerrar quando o usuário informar a mesma cidade como origem e destino (ex.: origem = destino).

---

## Exercício 7 — Roteiro de Viagem e Distância Total do Percurso

Utilizando a matriz de distâncias do **Exercício 6**, estenda o programa para permitir que o usuário digite um roteiro de viagem composto por várias cidades em sequência, finalizando a entrada com o valor `-1`.

O programa deve calcular e imprimir a distância total percorrida no itinerário completo.

**Exemplo**:
- Entrada do usuário: `0, 1, 4, 2, -1`
- Significado do trajeto:
  - De `0` (Belém) para `1` (Fortaleza): $1611\text{ km}$
  - De `1` (Fortaleza) para `4` (Rio de Janeiro): $2805\text{ km}$
  - De `4` (Rio de Janeiro) para `2` (Manaus): $4374\text{ km}$
  - Fim do itinerário (`-1`)
- Distância total acumulada: $1611 + 2805 + 4374 = 8790\text{ km}$.
